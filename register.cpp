#include "register.h"

#include <stdio.h>
#include <iostream>

#include<limits>
#include <fstream>
#include <algorithm>

#include "filehandle.h"

using namespace std;

bool Register::CompleteRegistration(void)
{
    bool retval = false;
    string name, password;
    UserInputData userdata;
    FileHandle filedata; 

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<< "Please Register your name" << endl;
    getline(cin, name);
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter password for above user name" << endl;
    getline(cin,password);
    userdata.SetUserPassword(password);

    UserValidation(userdata,name);
    filedata.WriteFile(userdata);
    
    return retval;
}
bool Register::UserValidation(UserInputData & userdata, string name)
{
    std::replace( name.begin(), name.end(), ' ', '#');
    userdata.SetUserName(name);
    return true;
}