#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>

#include "args.h"
using namespace std;

int main(int argc, char** argv) {
  printf("%s", get_args(argc, argv));
}
