#include "to_array.h"
#include "orientate.h"
#include "length.h"

string* to_array(stack<string> array) {
  string* array_ret = new string[get_length(array)+1];
  int index = array.size()-1;
  while (!array.empty()) {
    array_ret[index] = array.top();
    array.pop();
    index -= 1;
  }
  return array_ret;
}