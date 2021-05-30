#ifndef FILEHANDLE_H_
#define FILEHANDLE_H_

#include <stdio.h>
#include <iostream>

#include "register.h"

class FileHandle
{
private:
    /* data */
public:
    bool ReadFile(void);
    bool WriteFile(UserInputData &userdata);
};


#endif
