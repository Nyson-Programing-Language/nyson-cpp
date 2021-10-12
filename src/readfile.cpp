#include "readfile.h"

string get_cont(string path) {
    string contents;
    std::ifstream myfile;
    myfile.open(path.c_str());
    if ( myfile.is_open() ) { // always check whether the file is open
        string tp;
      while(getline(myfile, tp)){  //read data from file object and put it into string.
         contents = contents+tp+"\n";
      }
      myfile.close();   //close the file object.
    }
    return contents;
}