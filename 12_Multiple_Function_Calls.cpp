/*
◆──────────────────────────◆
12. Multiple Function Calls
◆──────────────────────────◆

💡 Remember
A function can be
called multiple times.

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
    // Function Calls
    cout << add(2, 3) + add(4, 5);

    return 0;
}

/*
Output:
14
*/