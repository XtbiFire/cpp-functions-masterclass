/*
Topic: Local Variable
Author: Imran

Variable created inside a function
is called local variable.
It can only be used inside that function.
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

    return 0;
}