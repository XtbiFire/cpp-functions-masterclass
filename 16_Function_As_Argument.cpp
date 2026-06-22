/*
Topic: Function As Argument
Author: Imran

Returned value of one function
can be passed as argument to another function.
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(add(1,2), add(3,4));

    return 0;
}