#include <iostream>
#include "Age.hpp"

using namespace std;

    void AgeGroup :: Start()
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