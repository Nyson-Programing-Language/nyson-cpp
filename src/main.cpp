#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>

#include "args.h"
#include "join.h"
using namespace std;

int main(int argc, char** argv) {
  printf("%s", join(get_args(argc, argv), " ").c_str());
  return 0;
}
