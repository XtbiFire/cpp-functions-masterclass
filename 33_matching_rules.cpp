/*
◆──────────────────────────◆
      33. Matching Rules
◆──────────────────────────◆

💡 Remember
Prototype and definition must match.

*/

#include <iostream>
using namespace std;

// Prototype
int add(int, int);

// Main Function
int main()
{
    cout << add(10, 15);

    return 0;
}

// Function Definition
int add(int a, int b)
{
    return a + b;
}

// Output:
// 25