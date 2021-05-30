#include "login.h"
#include "admin.h"

#include <stdio.h>
#include <iostream>

#include <string>
#include <fstream>
#include<limits>
#include <algorithm>


bool Login::CompleteUserLogin(void)
{
    bool retval = false;
    string name, password;
    UserInputData userdata;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<< "Please Register your name" << endl;
    getline(cin, name);
    userdata.SetUserName(name);
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter password for above user name" << endl;
    getline(cin,password);
    userdata.SetUserPassword(password);
    if(!ValidateUser(userdata))
    {
        cout<<"invalid User or Password\n"<<"Please enter Valid user name\n"<<endl;
        return false;
    }
    if(userdata.GetUserName() == "admin")
    {
        admin_access::user_input();
    }
    else
    {
        admin_access::Read_Question();
    }
    
}

bool Login::ValidateUser(UserInputData & userdata)
{
    ifstream infile;
    string data;
    infile.open("database.txt");
     while(!infile.eof()){
        infile >> data; 
        std::replace( data.begin(), data.end(), '#', ' ');
        if(data.compare(userdata.GetUserName()) == 0)
        {
            infile >> data; 
            if(data.compare(userdata.GetUserPassword()) == 0)
            {
                cout<<"Hello "<< userdata.GetUserName()<<" Welcome to Question Bank"<<endl;
                return true;
            }
            else
            {
                cout<<" Invalid Passsword"<<endl;
                return false;
            }
        }
     }
     return false;
}
