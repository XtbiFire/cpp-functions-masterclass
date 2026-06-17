/*
Topic: Parameters And Arguments
Author: Imran

Parameter = Variable in function definition
Argument = Value passed during function call
*/

#include <iostream>
using namespace std;

void show(int x)
{
    cout << x;
}

int main()
{
    show(5);

    return 0;
}