/*
◆──────────────────────────◆
   31. Prototype with Parameters
◆──────────────────────────◆

💡 Remember
Parameter types must match in
prototype and definition.

*/

#include <iostream>
using namespace std;

// Prototype
void show(int);

// Main Function
int main()
{
    show(100);

    return 0;
}

// Function Definition
void show(int x)
{
    cout << x;
}

// Output:
// 100