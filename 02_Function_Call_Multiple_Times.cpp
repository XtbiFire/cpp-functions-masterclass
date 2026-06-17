/*
Topic: Multiple Function Calls
Author: Imran

Concept:
One function can be called many times.
*/

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello ";
}

int main()
{
    hello();
    hello();
    hello();

    return 0;
}