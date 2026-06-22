/*
Topic: Global Variable
Author: Imran

Variable declared outside all functions
can be accessed by all functions.
*/

#include <iostream>
using namespace std;

int x = 100;

void show()
{
    cout << x;
}

int main()
{
    show();

    return 0;
}