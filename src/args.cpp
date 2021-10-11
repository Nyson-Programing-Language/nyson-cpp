#include "args.h"

stack<string> args;

stack<string> get_args(int argc, char** argv) {
  ostringstream stream;
  for (int i = 1; i < argc; ++i) {
    args.push(argv[i]);
  }
  return args;
}
