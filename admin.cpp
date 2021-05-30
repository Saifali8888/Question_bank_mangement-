#include <stdio.h>
#include <iostream>

#include <string>
#include <fstream>
#include<limits>
#include <algorithm>

#include "admin.h"
#include "adminfilehandle.h"

using namespace std;

bool admin_access::user_input(void)
{
    int Select;
    bool TheEnd = true;
    do
    {
        cout << "Please Select\n"
             << "1. Add Question \n"
             << "2. Read Question \n"
             << "3. Modifiy Question \n"
             << "4. Delete Question \n"
             << "5. Exit "
             << endl;
        cin >> Select;


        switch (Select)
        {
        case 1:
            Added_Question();
            break;
        case 2:
            Read_Question();
            break;
        case 3:
            Modify_Question();
            break;
        case 4:
            Delete_Question();
            break;
        
        case 5:
            TheEnd = false;
            break;

        default:
            break;
        }   

    } while (TheEnd);
    return false;
}

bool admin_access::Added_Question()
{
    string question , Subject;

    cout << "Please Select the Suject " << endl;
    cin >> Subject;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Please Add the Question "<<endl;
    getline(cin,question);

    Filehandle::writeFile(Subject, question);
}

bool admin_access::Read_Question()
{
    string Subject, question;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please Select the Suject " << endl;
    cin >> Subject;
    Filehandle::readFile(Subject);
}

bool admin_access::Delete_Question()
{
    string Subject, question;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please Select the Suject " << endl;
    cin >> Subject;
    cout << "Please Enter the SL no of the question \n" <<endl; 
    cin >> question;
    Filehandle::deleteFile(Subject, question);

}

bool admin_access::Modify_Question()
{
    string Subject, question;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please Select the Suject " << endl;
    cin >> Subject;
    cout << "Please Enter the SL no of the question " <<endl; 
    cin >> question;
    Filehandle::modifyFile(Subject, question);
}