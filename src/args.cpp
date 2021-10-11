#include "args.h"

stack<string> args;

stack<string> get_args(int argc, char** argv) {
  args.push("billy");
  return args;
}
