#include "run.h"
#include "to_array.h"
#include "join.h"
#include "length.h"
#include "trim_custom.h"

using namespace std;

string* get_contents(string input) {
    string* retArr = {trim_custom(input, "\"")};
    return retArr;
}
