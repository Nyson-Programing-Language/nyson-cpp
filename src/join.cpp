#include "join.h"

string join(stack<string> array, string join) {
  string ret;
  stack<string> array1;
  while (!array.empty()) {
    if (ret == "") {
      array1.push(array.top());
    }
    else {
      array1.push(join);
      array1.push(array.top());
    }
    array.pop();
  }
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
