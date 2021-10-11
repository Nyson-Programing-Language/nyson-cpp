#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

stack<string> lexer_return(string contents);
stack<string> remove_empty_spaces(stack<string> array);

#endif
