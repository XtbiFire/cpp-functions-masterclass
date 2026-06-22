/*
Topic: Local Vs Global Variable
Author: Imran

Local variable gets priority
over global variable.
*/

#include <iostream>
using namespace std;

int x = 100;

int main()
{
    int x = 10;

    cout << x;

    return 0;
}