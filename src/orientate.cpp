#include "orientate.h"

stack<string> orientate(stack<string> stacks) {
    stack<string> array1;
    while (!stacks.empty()) {
        array1.push(stacks.top());
        stacks.pop();
    }
    return array1;
}
