/*
Topic: Void Function
Author: Imran

void = Returns nothing
But can still print output
*/

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b;
}

int main()
{
    add(2, 3);

    return 0;
}