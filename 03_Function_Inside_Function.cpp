/*
Topic: Function Inside Function
Author: Imran

Concept:
A function can call another function.
*/

#include <iostream>
using namespace std;

void first()
{
    cout << "A";
}

void second()
{
    first();
    cout << "B";
}

int main()
{
    second();

    return 0;
}