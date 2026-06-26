/*
◆──────────────────────────◆
20. Variable Lifetime
◆──────────────────────────◆

💡 Remember
A local variable is created
when the function starts
and destroyed when it ends.

*/

#include <iostream>
using namespace std;

// Function Definition
void show()
{
    int x = 10;

    cout << x;
}

// Main Function
int main()
{
    // Function Calls
    show();
    show();

    return 0;
}

/*
Output:
1010
*/