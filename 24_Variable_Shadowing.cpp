/*
Topic: Variable Shadowing
Author: Imran

Local variable hides global variable
with same name.
*/

#include <iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 5;

    cout << x;

    return 0;
}