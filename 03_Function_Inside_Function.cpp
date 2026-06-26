/*
◆──────────────────────────◆
03. Function Inside Function
◆──────────────────────────◆

💡 Remember
One function can
call another function.

*/

#include <iostream>
using namespace std;

// Function Definition
void first()
{
    cout << "A";
}

// Function Definition
void second()
{
    first();
    cout << "B";
}

// Main Function
int main()
{
    // Function Call
    second();

    return 0;
}

/*
Output:
AB
*/