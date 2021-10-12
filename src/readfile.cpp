#include "readfile.h"

string get_cont(string path) {
    string contents;
    std::ifstream myfile;
    myfile.open(path.c_str());
    if ( myfile.is_open() ) {
        string tp;
      while(getline(myfile, tp)){
         contents = contents+tp+"\n";
      }
      myfile.close();
    }
    return contents;
}