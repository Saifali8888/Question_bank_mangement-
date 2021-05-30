#ifndef LOGIN_H_
#define LOGIN_H_

#include "userinput.h"

#include <stdio.h>
#include <iostream>

class Login
{
private:
    /* data */
public:
    bool CompleteUserLogin(void);
    bool ValidateUser(UserInputData & userdata);
};

#endif