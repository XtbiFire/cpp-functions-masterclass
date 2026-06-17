/*
Topic: Multiple Function Calls
Author: Imran
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(2, 3) + add(4, 5);

    return 0;
}