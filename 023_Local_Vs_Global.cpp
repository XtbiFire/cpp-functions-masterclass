/*
◆──────────────────────────◆
23. Local Vs Global Variable
◆──────────────────────────◆

💡 Remember
A local variable gets
priority over a
global variable.

*/

#include <iostream>
using namespace std;

// Global Variable
int x = 100;

// Main Function
int main()
{
    // Local Variable
    int x = 10;

    cout << x;

    return 0;
}

/*
Output:
10
*/
