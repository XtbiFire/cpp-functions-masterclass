/*
Topic: Return Function
Author: Imran

return sends value back to caller
*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(2, 3);

    return 0;
}