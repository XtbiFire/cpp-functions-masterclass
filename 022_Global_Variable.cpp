/*
◆──────────────────────────◆
22. Global Variable
◆──────────────────────────◆

💡 Remember
A global variable can be
accessed by all functions.

*/

#include <iostream>
using namespace std;

// Global Variable
int x = 100;

// Function Definition
void show()
{
    cout << x;
}

// Main Function
int main()
{
    // Function Call
    show();

    return 0;
}

/*
Output:
100
*/
