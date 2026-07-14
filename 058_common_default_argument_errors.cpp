/*
◆──────────────────────────◆
58. Common Default Argument Errors
◆──────────────────────────◆

💡 Remember

Default Arguments are easy to use,
but small mistakes can produce
compiler errors.

Always follow the rules carefully.

*/

#include <iostream>
using namespace std;

// ✔ Correct Function
void show(int a, int b = 10)
{
    cout << "Sum : " << a + b << endl;
}

int main()
{
    // Correct Function Call
    show(5);

    // User Value Overrides Default Value
    show(5, 20);

    return 0;
}

/*

Output

Sum : 15
Sum : 25


────────────────────────────────

❌ Common Error 1

void show(int a = 10, int b)
{
}

Reason:
Default parameter cannot be
followed by a non-default parameter.


────────────────────────────────

❌ Common Error 2

void show(int)
{
}

void show(int, int = 10)
{
}

show(5);

Reason:
Ambiguous Call Error

Compiler cannot decide
which function to call.


────────────────────────────────

❌ Common Error 3

void show(int a = 10, int b = 20);

show(10, 20, 30);

Reason:
Too many arguments.


────────────────────────────────

❌ Common Error 4

void show(int a, int b = 10);

show();

Reason:
Missing required argument 'a'.

*/
