/*
◆──────────────────────────◆
10. Function Call As Value
◆──────────────────────────◆

💡 Remember
A function call can be
used as a value.

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
    // Function Call
    cout << add(2, 3);

    return 0;
}

/*
Output:
5
*/
