/*
◆──────────────────────────◆
29. Why Compiler Needs It
◆──────────────────────────◆

💡 Remember
The compiler reads code
from top to bottom.

*/

#include <iostream>
using namespace std;

// Function Prototype
void welcome();

// Main Function
int main()
{
    // Function Call
    welcome();

    return 0;
}

// Function Definition
void welcome()
{
    cout << "Compiler already knows me!";
}

/*
Output:
Compiler already knows me!
*/
