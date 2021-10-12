#include "run.h"
#include "to_array.h"
#include "join.h"
#include "length.h"
#include "trim_custom.h"

using namespace std;

string* get_contents(string* input) {
    for (int i = 0; i < sizeof(input)/sizeof(input[0]);++i) {
        input[i] = trim_custom(input[i], "\"\'`");
    }
    return input;
}
