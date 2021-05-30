#ifndef ADMIN_FILE_FUNCTION_H
#define ADMIN_FILE_FUNCTION_H
#include <iostream>
#include <stdio.h>
#include <fstream>
  
using namespace std;
namespace Filehandle
{

    bool writeFile(string &Subject, string &question);
    bool readFile(string &Subject);
    bool deleteFile(string &Subject, string &question);
    bool modifyFile(string &Subject, string &question);
    int NumLinesIn_Files(string &Subject);

    void StringReplace_space(string& Replace);
    void StringReplace_underscore(string& Replace);

};

#endif