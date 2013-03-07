
#include "geeell.h"
#include "convert.h"

using namespace convert;
using namespace v8;

#define GL_SIZEOF(NAM) size_of -> Set (String::NewSymbol(#NAM), Number::New (sizeof (NAM)))

void init_gl_byhand (Handle<Object> gl) {
  Handle<Object> size_of = Object::New ();
  gl -> Set (String::NewSymbol ("sizeof"), size_of);

  GL_SIZEOF(GLenum);
  GL_SIZEOF(GLboolean);
  GL_SIZEOF(GLbitfield);
  GL_SIZEOF(GLbyte);
  GL_SIZEOF(GLshort);
  GL_SIZEOF(GLint);
  GL_SIZEOF(GLsizei);
  GL_SIZEOF(GLubyte);
  GL_SIZEOF(GLushort);
  GL_SIZEOF(GLuint);
  GL_SIZEOF(GLfloat);
  GL_SIZEOF(GLclampf);
  GL_SIZEOF(GLdouble);
  GL_SIZEOF(GLclampd);

  GL_CONST(GL_TRUE);
  GL_CONST(GL_FALSE);

  // special case for glShaderSource until we figure out how to deal
  // properly with strings
  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (2 > args . Length ())
          return ThrowException
            (String::NewSymbol("Not enough arguments for glShaderSource (needs 2)"));
        GLuint shader = JSTO<GLuint> (args[0]);
        std::string s = JSTO<std::string> (args[1]);
        const GLint len = s . size ();
        glShaderSource (shader, 1, reinterpret_cast<const GLchar**> (&s[0]), &len);
        return Undefined ();
      });
    gl -> Set (String::NewSymbol ("glShaderSource"), tmpl -> GetFunction ());
  }
}
