/*
◆──────────────────────────◆
62. Why Return by Value Is Used
◆──────────────────────────◆

💡 Remember

Return by Value is used
to send the result of a
function back to the caller.

Instead of printing inside
the function, we return the
value so it can be reused
anywhere in the program.

*/

#include <iostream>
using namespace std;

// Function
int add(int a, int b)
{
    return a + b;
}

// Main Function
int main()
{
    int result = add(10, 20);

    cout << "Sum : " << result;

    return 0;
}

/*

Output

Sum : 30

*/
