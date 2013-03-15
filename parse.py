import re, sys
from jinja2 import Environment, FileSystemLoader

allowed = set(['GLenum','GLbyte','GLshort','GLint','GLsizei', 'GLboolean',
               'GLbitfield',
               'GLubyte','GLushort','GLuint','GLfloat','GLclampf',
               'GLdouble','GLclampd'])

const_re = re.compile('#define\s+(GL_[A-Z0-9_]+)\s+(0x[0-9]+)')
meth_re = re.compile('\s*([A-Za-z_0-9]+)\s+(gl[A-Za-z0-9]+)\s*\(\s*([^)\[\]]+)\)\s*;')

def argz(s):
    if 'void' == s:
        return []
    def deconst(x):
        return x.replace('const', '')
    def movestar(x):
        return x.replace(' *', '* ')
    def f(x):
        return ''.join(movestar(deconst(x)).split()[:-1])
    return [f(x) for x in s.split(',')]

def destar(x):
    return x.replace('*', '')

def process_const(line):
    m = const_re.search(line)
    if m:
        print('  GL_CONST(%s);' % m.group(1))
        return True
    return False

def is_ptr(x):
    return x.endswith('*')

def is_v_meth(typ, nam, args):
    return \
        nam.endswith(typ) and \
        all(x in allowed for x in args[:-1]) and \
        args[-1] == 'GLfloat*'

___bad = ['extern', 'GLAPIENTRY', 'GLAPI', 'APIENTRY', 'APIENTRYP']
def fix_line (l):
    for x in ___bad:
        l = l.replace(x, '')
    return l.strip()

def process_meth(line, env):
    line = fix_line (line)
    meth = env.get_template('meth.tmpl')
    getter = env.get_template('getter.tmpl')
    floatv = env.get_template('floatv.tmpl')
    m = meth_re.search(line)
    if not m:
        return
    ret = m.group(1)
    nam = m.group(2)
    args = argz(m.group(3))
    if is_v_meth ('fv', nam, args):
        print '// FV'
        print (floatv.render(meth = { 'name' : nam,
                                      'typ' : 'GLfloat',
                                      'args' : args[:-1] }))
        return True
    elif is_v_meth ('iv', nam, args):
        print '// IV'
        print (floatv.render(meth = { 'name' : nam,
                                      'typ' : 'GLint',
                                      'args' : args[:-1] }))
        return True
    elif is_v_meth ('dv', nam, args):
        print '// DV'
        print (floatv.render(meth = { 'name' : nam,
                                      'typ' : 'GLdouble',
                                      'args' : args[:-1] }))
        return True
    elif is_v_meth ('sv', nam, args):
        print '// SV'
        print (floatv.render(meth = { 'name' : nam,
                                      'typ' : 'GLshort',
                                      'args' : args[:-1] }))
        return True
    elif 'glGet' == nam[:5] and 1 < len(args) and all(x in allowed for x in args[:-1]) and is_ptr(args[-1]):
        if 'GLvoid' != destar(args[-1]):
            sig = { 'name' : nam, 'args' : args[:-1], 'ret' : destar(args[-1]) }
            print(getter.render(meth = sig))
        return True
    elif 0 == len(args) or all(x in allowed for x in args):
        sig = { 'name' : nam,
                'args' : args }
        if 'GLvoid' != ret and 'void' != ret:
            sig['returns'] = True
            sig['return_type'] = ret
        print (meth.render(meth = sig))
        return True
    return False

def process(fp, env):
    for line in fp:
        count = 0
        if process_const(line):
            count = 1 + count
        if process_meth(line, env):
            count = 1 + count
        if 0 == count:
            pass


def main():
    env = Environment(loader = FileSystemLoader('./templates'))
    print(env.get_template('header.tmpl').render())
    for header_file in sys.argv[1:]:
        process(file(header_file), env)
    print(env.get_template('footer.tmpl').render())

if '__main__' == __name__:
    main()
