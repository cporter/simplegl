
#include <node.h>
#include <v8.h>
#include "geeell.h"

using namespace v8;

void init (Handle<Object> target) {
  init_gl(target);
}

NODE_MODULE (simplegl, init);
