/*
◆──────────────────────────◆
      47. Ambiguous Call
◆──────────────────────────◆

💡 Remember
Two equal matches
= Compiler Error.

*/

#include <iostream>
using namespace std;

// Function 1
void show(int x)
{
    cout << "Integer";
}

// Function 2
void show(float x)
{
    cout << "Float";
}

// Main Function
int main()
{
    // Error:
    // Compiler can't decide
    // int or float.

    // show(10.0);

    return 0;
}

/*
Output:
Compilation Error
*/
