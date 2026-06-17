/*
Topic: Store Return Value
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
    int result = add(2, 3);

    cout << result;

    return 0;
}