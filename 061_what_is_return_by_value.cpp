/*
◆──────────────────────────◆
   61. What Is Return by Value
◆──────────────────────────◆

💡 Remember

Return by Value means
a function sends a value
back to the caller using
the return keyword.

The returned value can be
stored, printed or used
in an expression.

*/

#include <iostream>
using namespace std;

// Function
int square(int x)
{
    return x * x;
}

// Main Function
int main()
{
    cout << square(5);

    return 0;
}

/*

Output

25

*/
