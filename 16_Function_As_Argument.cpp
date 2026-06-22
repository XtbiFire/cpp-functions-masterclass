/*
Topic: Function As Argument
Author: Imran

A function's returned value can be passed
as an argument to another function.
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(add(1,2), 3);

    return 0;
}