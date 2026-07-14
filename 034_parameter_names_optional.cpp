/*
◆──────────────────────────◆
  34. Parameter Names Optional
◆──────────────────────────◆

💡 Remember
Parameter names are optional
inside a prototype.

*/

#include <iostream>
using namespace std;

// Prototype
int square(int);

// Main Function
int main()
{
    cout << square(6);

    return 0;
}

// Function Definition
int square(int x)
{
    return x * x;
}

// Output:
// 36
