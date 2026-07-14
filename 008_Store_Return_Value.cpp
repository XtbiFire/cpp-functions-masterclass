/*
◆──────────────────────────◆
08. Store Return Value
◆──────────────────────────◆

💡 Remember
A returned value can be
stored in a variable.

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
    int result = add(2, 3);

    cout << result;

    return 0;
}

/*
Output:
5
*/
