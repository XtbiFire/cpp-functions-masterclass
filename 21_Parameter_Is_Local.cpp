/*
Topic: Parameter Is Local Variable
Author: Imran

Function parameters behave like
local variables.
*/

#include <iostream>
using namespace std;

void show(int x)
{
    cout << x;
}

int main()
{
    show(5);

    return 0;
}