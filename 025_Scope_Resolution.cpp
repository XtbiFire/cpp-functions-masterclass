/*
◆──────────────────────────◆
25. Scope Resolution Operator
◆──────────────────────────◆

💡 Remember
:: accesses the global
variable when a local
variable has the same name.

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

    cout << x << endl;

    cout << ::x;

    return 0;
}

/*
Output:
5
50
*/
