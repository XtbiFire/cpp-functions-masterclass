/*
◆────────────────────────────────────────◆
59. Default Arguments + Function Overloading
◆────────────────────────────────────────◆

💡 Remember

Default Arguments and Function
Overloading can create ambiguity.

If two overloaded functions
can match the same function call,
the compiler cannot decide
which one to execute.

Result:
❌ Ambiguous Call Error

*/

#include <iostream>
using namespace std;

// Function 1
void show(int x)
{
    cout << "Function 1";
}

// Function 2
void show(int x, int y = 10)
{
    cout << "Function 2";
}

// Main Function
int main()
{
    // show(5);      // ❌ Ambiguous Call Error

    show(5, 20);     // ✅ Calls Function 2

    return 0;
}

/*

Output

Function 2


──────────────────────────────────────

❌ If you write

show(5);

Compiler sees

show(int)
show(int, int = 10)

Both are valid.

Compiler cannot decide
which function to call.

Result

Ambiguous Call Error

*/
