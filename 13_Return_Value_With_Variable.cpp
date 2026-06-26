/*
◆──────────────────────────◆
13. Return Value With Variable
◆──────────────────────────◆

💡 Remember
A returned value can be
stored and used again.

*/

#include <iostream>
using namespace std;

// Function Definition
int add(int a, int b)
{
    return a + b;
}

// Main Function
int main()
{
    // Store Return Value
    int x = add(2, 3);

    // Function Call
    cout << x + add(1, 1);

    return 0;
}

/*
Output:
7
*/