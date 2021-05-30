#include "filehandle.h"

#include <stdio.h>

#include <iostream>
#include <string>
#include <fstream>

#define DATAFILE "database.txt"

bool FileHandle::WriteFile(UserInputData &userdata)
{
    fstream filedata;
    filedata.open("database.txt", ios::app);

    filedata<<userdata.GetUserName().c_str()<<" "<<userdata.GetUserPassword()<<endl;

    filedata.close();
}