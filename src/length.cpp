#include "length.h"

int get_length(stack<string> array) {
    int index = 0;
    while (!array.empty()) {
        array.pop();
        index += 1;
    }
    index--;
    return index;
}