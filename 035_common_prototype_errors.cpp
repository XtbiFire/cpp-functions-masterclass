/*
◆──────────────────────────◆
 35. Common Prototype Errors
◆──────────────────────────◆

💡 Remember
Return type and parameters
must exactly match.

*/

#include <iostream>
using namespace std;

// Prototype
int add(int, int);

// Main Function
int main()
{
    cout << add(8, 12);

    return 0;
}

// Function Definition
int add(int a, int b)
{
    return a + b;
}

// Output:
// 20
