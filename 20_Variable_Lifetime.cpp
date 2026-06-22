/*
Topic: Variable Lifetime
Author: Imran

Local variable is created when
function starts and destroyed when
function ends.
*/

#include <iostream>
using namespace std;

void show()
{
    int x = 10;

    cout << x;
}

int main()
{
    show();
    show();

    return 0;
}