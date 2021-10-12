#include "run.h"
#include "to_array.h"
#include "join.h"
#include "length.h"

using namespace std;

void run(stack<string> stacks) {
    string* array = to_array(stacks);
    for (int i = 0; i < get_length(stacks); ++i) {
        // cout << i << ": " << array[i] << endl;
        if (array[i] == "log"){
            cout << array[i+2] << endl;
        }
    }
}
