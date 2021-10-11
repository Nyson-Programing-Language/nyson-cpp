#include "join.h"
#include "orientate.h"

string join(stack<string> array, string join) {
  string ret;
  stack<string> array1 = orientate(array);
  while (!array1.empty()) {
    if (ret == "") {
      ret = array1.top();
    }
    else {
      ret = ret + join + array1.top();
    }
    array1.pop();
  }
  return ret;
}
