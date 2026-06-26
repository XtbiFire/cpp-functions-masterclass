/*
◆──────────────────────────◆
37. Why Large Projects Use Prototypes
◆──────────────────────────◆

💡 Remember
Prototype keeps code organized.

*/

#include <iostream>
using namespace std;

// Prototype
int add(int, int);

// Main Function
int main()
{
    cout << add(50, 70);

    return 0;
}

// Definition
int add(int a, int b)
{
    return a + b;
}

// Output:
// 120