/*
◆──────────────────────────◆
    67. Returning Expression
◆──────────────────────────◆

💡 Remember

A function can directly return
the result of an expression.

Expression can be:

Addition
Subtraction
Multiplication
Division
Any calculation

*/

#include <iostream>
using namespace std;

// Function
int multiply(int a, int b)
{
    return a * b;
}

// Main Function
int main()
{
    cout << "Result : " << multiply(5, 4);

    return 0;
}

/*

Output

Result : 20

*/
