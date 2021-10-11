#include "lexer.h"
#include "trim.h"

stack<string> lexer_return(string contents) {
    //fixed_contents
    stack<string> lexed_conts;
    string temp;
    int quotes;
    for(int i = 0; i<contents.length(); ++i) {
        if (contents.at(i) == '\"' || contents.at(i) == '\'' || contents.at(i) == '`') {
            ++quotes;
        }
        if (contents.at(i) == '('  || contents.at(i) == '\"'  || contents.at(i) == ';' || contents.at(i) == ')' || contents.at(i) == '\'' || contents.at(i) == '`' || contents.at(i) == '\\' || (quotes%2 == 0 && contents.at(i) == ' ')){
            if (temp != "") {
                lexed_conts.push(temp);
            }
            if (std::string(1, contents.at(i)) != " ") {
                lexed_conts.push(std::string(1, contents.at(i)));
            }
            temp="";
        }
        else {
            temp = temp + contents.at(i);
        }
    }
    if (temp != " " || temp != "") {
        lexed_conts.push(temp);
    }
    return lexed_conts;
}