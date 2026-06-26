/*
◆──────────────────────────◆
 38. Prototype Final Boss Test
◆──────────────────────────◆

💡 Remember
Prototype and Definition
must always match.

*/

#include <iostream>
using namespace std;

// Prototype
int multiply(int, int);

// Main Function
int main()
{
    cout << multiply(8, 9);

    return 0;
}

// Definition
int multiply(int a, int b)
{
    return a * b;
}

// Output:
// 72