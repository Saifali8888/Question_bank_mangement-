#ifndef USERINPUT_H
#define USERINPUT_H

#include <stdio.h>
#include <iostream>

using namespace std;

class UserInputData
{
    string name;
    string password;
    public:

    inline string GetUserName(void){ return this->name;}
    inline string GetUserPassword(void){ return this->password;}

    inline void SetUserName(string username){ this->name = username;}
    inline void SetUserPassword(string userpassword){ this->password = userpassword;}
}; 

#endif