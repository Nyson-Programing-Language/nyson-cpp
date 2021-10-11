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
        if (contents.at(i) == '('  || contents.at(i) == '\"'  || contents.at(i) == ';' || contents.at(i) == ')' || contents.at(i) == '\'' || contents.at(i) == '`' || contents.at(i) == '\\' || (quotes%2 == 0 && (contents.at(i) == ' ' || contents.at(i) == '\n' || contents.at(i) == '\t' || contents.at(i) == '\r' || contents.at(i) == '\f' || contents.at(i) == '\v'))){
            if (temp != "") {
                lexed_conts.push(temp);
            }
            if (string(1, contents.at(i)) != " " && string(1, contents.at(i)) != "\n" && string(1, contents.at(i)) != "\t" && string(1, contents.at(i)) != "\r" && string(1, contents.at(i)) != "\f" && string(1, contents.at(i)) != "\v") {
                lexed_conts.push(string(1, contents.at(i)));
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