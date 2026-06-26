/*
◆──────────────────────────◆
16. Function As Argument
◆──────────────────────────◆

💡 Remember
A function's returned value
can be passed as an argument
to another function.

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
    cout << add(add(1,2), add(3,4));

    return 0;
}

/*
Output:
10
*/