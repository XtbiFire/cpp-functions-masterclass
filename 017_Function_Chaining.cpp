/*
◆──────────────────────────◆
17. Function Chaining
◆──────────────────────────◆

💡 Remember
One function call can be
passed inside another
function call.

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
    cout << add(add(1, 2), 3);

    return 0;
}

/*
Output:
6
*/
