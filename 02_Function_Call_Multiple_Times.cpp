/*
◆──────────────────────────◆
02. Multiple Function Calls
◆──────────────────────────◆

💡 Remember
One function can be
called multiple times.

*/

#include <iostream>
using namespace std;

// Function Definition
void hello()
{
    cout << "Hello ";
}

// Main Function
int main()
{
    // Function Calls
    hello();
    hello();
    hello();

    return 0;
}

/*
Output:
Hello Hello Hello
*/