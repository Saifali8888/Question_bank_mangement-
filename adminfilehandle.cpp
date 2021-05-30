#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <sstream>
#include <algorithm>  
#include <strings.h>
#include <bits/stdc++.h>

#include "adminfilehandle.h"

#define SPACECHARACTER " "
using namespace std;

bool Filehandle::writeFile(string &Subject, string &question)
{
    fstream filedata;
    int linenos = NumLinesIn_Files(Subject);
    filedata.open(Subject.c_str(), ios::app);
    filedata<<linenos<<". "<<question<<endl;
}

bool Filehandle::readFile(string &Subject)
{
    ifstream filedata(Subject.c_str());
    string myText, raw;
    std::istringstream iss;

    vector<std::string> words;
    while (getline(filedata, myText))
    {
        cout<<myText<<endl;

        if(myText.empty())
            return true;
    }
    return false;
}

bool Filehandle::deleteFile(string &Subject, string &question)
{
    ifstream filedata(Subject);
    string myText,Temp("temp");

    ofstream tempdata;

    while (getline(filedata, myText))
    {
        if (myText.find(question) != std::string::npos)
        {
            continue;
        }
        else
        {
            myText.erase(0,3);
            writeFile(Temp, myText);
           
        }
    }
    filedata.close();

    remove(Subject.c_str());
    rename("temp", Subject.c_str());
    return true;
}

bool Filehandle::modifyFile(string &Subject, string &question)
{
    deleteFile(Subject, question);
    cout << "Enter the New Question " << endl;
    cin >> question;
    writeFile(Subject, question);
   return true;
}

void Filehandle::StringReplace_space(string &Replace)
{
    std::replace(Replace.begin(), Replace.end(), ' ', '_');
}

void Filehandle::StringReplace_underscore(string &Replace)
{
    std::replace(Replace.begin(), Replace.end(), '_', ' ');
}

int Filehandle::NumLinesIn_Files(string &Subject)
{
    int aNumOfLines = 1;
    ifstream aInputFile(Subject);

    string aLineStr;
    while (getline(aInputFile, aLineStr))
    {
        if (!aLineStr.empty())
            aNumOfLines++;
    }

    return aNumOfLines;
}
