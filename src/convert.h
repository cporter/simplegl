
#pragma once

#include <string>

namespace convert {
using namespace v8;

template <typename T> Handle<Value> TOJS (T) { return Undefined(); }
template <typename T> T JSTO(Handle<Value>) { return T(); }

#define NUMBERISH(NAM)                             \
  template <> Handle<Value> TOJS(NAM x) {   \
    return Number::New ((double) x);               \
  }                                                \
  template <> NAM JSTO(Handle<Value> val) { \
    return (NAM) val -> ToNumber () -> Value ();   \
  }

NUMBERISH(unsigned int);
NUMBERISH(unsigned char);
NUMBERISH(signed char);
NUMBERISH(short);
NUMBERISH(int);
NUMBERISH(unsigned short);
NUMBERISH(float);
NUMBERISH(double);

#undef NUMBERISH

template<> Handle<Value> TOJS (std::string x) {
  return String::New (x.data());
}

template<> std::string JSTO (Handle<Value> val) {
  HandleScope scope;
  Local<String> s = val -> ToString ();
  std::string ret (1 + s -> Length (), 0);
  s -> WriteUtf8 (&ret[0]);
  return ret;
}

}
