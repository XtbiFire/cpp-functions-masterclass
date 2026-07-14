/*
◆──────────────────────────◆
18. Local Variable
◆──────────────────────────◆

💡 Remember
A local variable can be
used only inside the
function where it is created.

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
    // Function Call
    show();

    return 0;
}

/*
Output:
10
*/
