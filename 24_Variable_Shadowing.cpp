/*
◆──────────────────────────◆
24. Variable Shadowing
◆──────────────────────────◆

💡 Remember
A local variable hides
the global variable
with the same name.

*/

#include <iostream>
using namespace std;

// Global Variable
int x = 50;

// Main Function
int main()
{
    // Local Variable
    int x = 5;

    cout << x;

    return 0;
}

/*
Output:
5
*/