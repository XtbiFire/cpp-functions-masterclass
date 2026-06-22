/*
Topic: Function Chaining
Author: Imran

One function call is passed
inside another function call.
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(add(1, 2), 3);

    return 0;
}