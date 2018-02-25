#include <iostream>
#include <String>

#ifndef Age_hpp
#define Age_hpp

using namespace std;

void Age()
{
 int input;

 cout << "Please Enter Your Age" << endl;
 cin >> input;

    if (input < 18)
    {
        cout << "You are a Minor." << endl;
    }
     else if(input >= 65)
    {
        cout << "You are a Senior" << endl;
    }
    else if (input == 18)
    {
        cout << "You are an Adult" << endl;
    }
     else if (input < 65)
    {
        cout << "You are an Adult." << endl;
    }  
}

#endif