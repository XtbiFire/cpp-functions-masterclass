/*
◆──────────────────────────◆
   32. Prototype with Return Value
◆──────────────────────────◆

💡 Remember
Prototype also tells the return type.

*/

#include <iostream>
using namespace std;

// Prototype
int multiply(int, int);

// Main Function
int main()
{
    cout << multiply(4, 5);

    return 0;
}

// Function Definition
int multiply(int a, int b)
{
    return a * b;
}

// Output:
// 20