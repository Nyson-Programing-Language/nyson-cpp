#include "trim_custom.h"

string trim_custom(string str, const char* character) {
    str.erase(str.find_last_not_of(character) + 1);
    str.erase(0,str.find_first_not_of(character));
    return str;
}