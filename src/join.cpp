#include "join.h"

string join(stack<string> array, string join) {
  string ret;
  while (!array.empty()) {
    if (ret == "") {
      ret = array.top();
    }
    else {
      ret = ret + join + array.top();
    }
    array.pop();
  }
  return ret;
}
