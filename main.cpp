#include <stdio.h>
#include <iostream>

#include "register.h"
#include "login.h"

using namespace std;
int main()
{
    signed short int choice;
    bool khatam = false;
    do
    {
        cout << "Please Select the choice\n"
             << "1. Register \n"
             << "2. Login \n"
             << "3. Exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Register user_registration;
            user_registration.CompleteRegistration();
            break;
        }
        case 2:
        {
            Login user_login;
            user_login.CompleteUserLogin();
            break;
        }
        case 3:
        {
            cout << "Thank you visit again\n"
                 << endl;
            khatam = true;
        }
        default:
            break;
        }
    } while (!khatam);
    return 0;
}