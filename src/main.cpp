#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>

#include "args.h"
#include "join.h"
#include "readfile.h"
#include "lexer.h"
#include "trim.h"
#include "run.h"
#include "to_array.h"

using namespace std;

int main(int argc, char** argv) {
  run(lexer_return(trim(get_cont(join(get_args(argc, argv), "")))));
  return 0;
}