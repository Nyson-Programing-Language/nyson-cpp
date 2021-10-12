#include "lexer.h"
#include "trim.h"

char quotes_array[] = {'\"', '\'', '`'};
char splits_array[] = {'(', ')', ';', '\\', '{', '}', '[', ']'};
char empty_array[] = {' ', '\n', '\t', '\r', '\f', '\v'};

stack<string> lexer_return(string contents) {
    //fixed_contents
    stack<string> lexed_conts;
    string temp;
    int quotes = 0;
    for(int i = 0; i<contents.length(); ++i) {
        if (std::find(std::begin(quotes_array), std::end(quotes_array), contents.at(i)) != std::end(quotes_array)) {
            ++quotes;
        }
        if (std::find(std::begin(splits_array), std::end(splits_array), contents.at(i)) != std::end(splits_array) || (quotes%2 == 0 && (std::find(std::begin(empty_array), std::end(empty_array), contents.at(i)) != std::end(empty_array)))){
            if (temp != "") {
                lexed_conts.push(temp);
            }
            if (std::find(std::begin(empty_array), std::end(empty_array), contents.at(i)) == std::end(empty_array)) {
                lexed_conts.push(string(1, contents.at(i)));
            }
            temp="";
        }
        else {
            temp = temp + contents.at(i);
        }
    }
    if (temp != " " || temp != "\n" || temp != "\t" || temp != "\v" || temp != "\r" || temp != "\f") {
        lexed_conts.push(temp);
    }
    return lexed_conts;
}