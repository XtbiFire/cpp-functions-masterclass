/*
Topic: Return Value With Variable
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
    int x = add(2, 3);

    cout << x + add(1, 1);

    return 0;
}