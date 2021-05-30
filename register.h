#ifndef REGISTER_H
#define REGISTER_H

# include <stdio.h>
# include <iostream>

# include "userinput.h"

using namespace std;

class Register
{
private:
    /* data */
  
public:
    Register(/* args */){};
    bool CompleteRegistration(void);
    bool UserValidation(UserInputData & userdata, string name);
};


#endif