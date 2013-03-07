
#pragma once

#include <string>

namespace convert {
using namespace v8;

template <typename T> inline Handle<Value> TOJS (T) { return Undefined(); }
template <typename T> inline T JSTO(Handle<Value>) { return T(); }

#define NUMBERISH(NAM)                             \
  template <> inline Handle<Value> TOJS(NAM x) {   \
    return Number::New ((double) x);               \
  }                                                \
  template <> inline NAM JSTO(Handle<Value> val) { \
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

template<> inline Handle<Value> TOJS (std::string x) {
  return String::New (x.data());
}

template<> inline std::string JSTO (Handle<Value> val) {
  HandleScope scope;
  Local<String> s = val -> ToString ();
  std::string ret (1 + s -> Length (), 0);
  s -> WriteUtf8 (&ret[0]);
  return ret;
}

}
