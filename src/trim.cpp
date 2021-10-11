#include "trim.h"

const char* typeOfWhitespaces = " \t\n\r\f\v";

string trim(string str) {
    str.erase(str.find_last_not_of(typeOfWhitespaces) + 1);
    str.erase(0,str.find_first_not_of(typeOfWhitespaces));
    return str;
}