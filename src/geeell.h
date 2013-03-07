
#pragma once

#define GL_GLEXT_PROTOTYPES 1
#define GLX_GLXEXT_PROTOTYPES 1


#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
#elif _MSC_VER
#include <gl/gl.h>
#include <gl/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#endif

#include <v8.h>

#define JS_FUNC [](v8::Arguments const& args) -> v8::Handle<v8::Value>
#define GL_CONST(NAM) gl -> Set (v8::String::NewSymbol(#NAM), v8::Number::New(NAM))

void init_gl(v8::Handle<v8::Object>);
void init_gl_byhand (v8::Handle<v8::Object>);

