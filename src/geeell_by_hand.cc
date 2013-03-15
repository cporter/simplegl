
#include "geeell.h"
#include "convert.h"

#include <vector>
#include <functional>

using namespace convert;
using namespace v8;

#define GL_SIZEOF(NAM) size_of -> Set (String::NewSymbol(#NAM), Number::New (sizeof (NAM)))

template <typename T>
void WithVector (Handle<Array> arr, std::function<void(std::vector<T>&)> f) {
  const size_t N = arr -> Length ();
  std::vector<T> vect;
  vect . reserve (N);
  for (size_t i = 0; i < N; ++i)
    vect . push_back (JSTO<T> (arr -> Get (i)));
  f (vect);
}

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

  // glBufferData and glBufferSubData (also the ARB versions) we'll handle as a special case (for now)

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (4 > args . Length ())
          return ThrowException
            (String::NewSymbol("Not enough arguments for glBufferData (needs at least 4)"));

        GLenum target = JSTO<GLenum> (args[0]);
        GLsizeiptr size = JSTO<GLsizeiptr> (args[1]);
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        GLenum usage = JSTO<GLenum> (args[3]);

        if (4 < args . Length () && "double" == JSTO<std::string> (args[4])) {
          WithVector<GLdouble> (arr, [target, size, usage](std::vector<GLdouble> &v) {
              glBufferData (target, size, &v[0], usage);
            });
        } else {
          WithVector<GLfloat> (arr, [target, size, usage](std::vector<GLfloat> &v) {
              glBufferData (target, size, &v[0], usage);
            });
        }
        return Undefined ();
      });
    gl -> Set (String::NewSymbol ("glBufferData"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (4 > args . Length ())
          return ThrowException
            (String::NewSymbol("Not enough arguments for glBufferData (needs at least 4)"));

        GLenum target = JSTO<GLenum> (args[0]);
        GLintptr offset = JSTO<GLintptr> (args[1]);
        GLsizeiptr size = JSTO<GLsizeiptr> (args[2]);
        Handle<Array> arr = Handle<Array>::Cast (args[3]);

        if (4 < args . Length () && "double" == JSTO<std::string> (args[4])) {
          WithVector<GLdouble> (arr, [target, offset, size](std::vector<GLdouble> &v) {
              glBufferSubData (target, offset, size, &v[0]);
            });
        } else {
          WithVector<GLfloat> (arr, [target, offset, size](std::vector<GLfloat> &v) {
              glBufferSubData (target, offset, size, &v[0]);
            });
        }
        return Undefined ();
      });
    gl -> Set (String::NewSymbol ("glBufferSubData"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (4 > args . Length ())
          return ThrowException
            (String::NewSymbol("Not enough arguments for glBufferData (needs at least 4)"));

        GLenum target = JSTO<GLenum> (args[0]);
        GLsizeiptr size = JSTO<GLsizeiptr> (args[1]);
        Handle<Array> arr = Handle<Array>::Cast (args[2]);
        GLenum usage = JSTO<GLenum> (args[3]);

        if (4 < args . Length () && "double" == JSTO<std::string> (args[4])) {
          WithVector<GLdouble> (arr, [target, size, usage](std::vector<GLdouble> &v) {
              glBufferDataARB (target, size, &v[0], usage);
            });
        } else {
          WithVector<GLfloat> (arr, [target, size, usage](std::vector<GLfloat> &v) {
              glBufferDataARB (target, size, &v[0], usage);
            });
        }
        return Undefined ();
      });
    gl -> Set (String::NewSymbol ("glBufferDataARB"), tmpl -> GetFunction ());
  }

  { Local<FunctionTemplate> tmpl =
      FunctionTemplate::New
      (JS_FUNC {
        if (4 > args . Length ())
          return ThrowException
            (String::NewSymbol("Not enough arguments for glBufferData (needs at least 4)"));

        GLenum target = JSTO<GLenum> (args[0]);
        GLintptr offset = JSTO<GLintptr> (args[1]);
        GLsizeiptr size = JSTO<GLsizeiptr> (args[2]);
        Handle<Array> arr = Handle<Array>::Cast (args[3]);

        if (4 < args . Length () && "double" == JSTO<std::string> (args[4])) {
          WithVector<GLdouble> (arr, [target, offset, size](std::vector<GLdouble> &v) {
              glBufferSubDataARB (target, offset, size, &v[0]);
            });
        } else {
          WithVector<GLfloat> (arr, [target, offset, size](std::vector<GLfloat> &v) {
              glBufferSubDataARB (target, offset, size, &v[0]);
            });
        }
        return Undefined ();
      });
    gl -> Set (String::NewSymbol ("glBufferDataARB"), tmpl -> GetFunction ());
  }

}
