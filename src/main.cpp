#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>

#include "args.h"
#include "join.h"
#include "readfile.h"
#include "lexer.h"
#include "trim.h"

using namespace std;

int main(int argc, char** argv) {
  stack<string> stacks = lexer_return(trim(get_cont(join(get_args(argc, argv), ""))));
  cout << join(stacks, "\n");
  return 0;
}