/*
Topic: Return Stops Function
Author: Imran

Code after return never executes.
*/

#include <iostream>
using namespace std;

int test()
{
    cout << "A";

    return 5;

    cout << "B";
}

int main()
{
    test();

    return 0;
}