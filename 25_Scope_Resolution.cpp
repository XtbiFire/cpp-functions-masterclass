/*
Topic: Scope Resolution Operator
Author: Imran

:: is used to access global variable
when local variable has same name.
*/

#include <iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 5;

    cout << x << endl;

    cout << ::x;

    return 0;
}