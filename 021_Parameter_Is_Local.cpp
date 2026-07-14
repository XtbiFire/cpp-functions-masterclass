/*
◆──────────────────────────◆
21. Parameter Is Local Variable
◆──────────────────────────◆

💡 Remember
Function parameters behave
like local variables.

*/

#include <iostream>
using namespace std;

// Function Definition
void show(int x)
{
    cout << x;
}

// Main Function
int main()
{
    // Function Call
    show(5);

    return 0;
}

/*
Output:
5
*/
