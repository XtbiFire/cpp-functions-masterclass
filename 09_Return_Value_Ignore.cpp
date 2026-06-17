/*
Topic: Ignore Return Value
Author: Imran

Returned value is ignored.
Nothing is printed.
*/

#include <iostream>
using namespace std;

int show()
{
    return 5;
}

int main()
{
    show();

    return 0;
}