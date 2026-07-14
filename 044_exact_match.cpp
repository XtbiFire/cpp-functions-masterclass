/*
◆──────────────────────────◆
      44. Exact Match
◆──────────────────────────◆

💡 Remember
Compiler always chooses
the exact match first.

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
    show(10);

    return 0;
}

/*
Output:
Integer
*/
