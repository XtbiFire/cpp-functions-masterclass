/*
◆──────────────────────────◆
 60. Default Arguments Final Boss
◆──────────────────────────◆

💡 Remember

Default Arguments make
function calls flexible.

Rules

✔ User Value has Priority
✔ Missing Arguments use Default Value
✔ Default Parameters must be on the Right
✔ Avoid Ambiguous Overloading

*/

#include <iostream>
using namespace std;

// Function
void add(int a, int b = 10, int c = 20)
{
    cout << "a = " << a
         << ", b = " << b
         << ", c = " << c
         << " -> Sum = "
         << a + b + c << endl;
}

// Main Function
int main()
{
    // Case 1
    add(5);

    // Case 2
    add(5, 2);

    // Case 3
    add(5, 2, 1);

    return 0;
}

/*

Output

a = 5, b = 10, c = 20 -> Sum = 35
a = 5, b = 2, c = 20 -> Sum = 27
a = 5, b = 2, c = 1 -> Sum = 8


────────────────────────────────────

Final Boss Revision

✔ add(5);

a = 5
b = 10 (Default)
c = 20 (Default)

Output = 35


────────────────────────────────────

✔ add(5, 2);

a = 5
b = 2
c = 20 (Default)

Output = 27


────────────────────────────────────

✔ add(5, 2, 1);

a = 5
b = 2
c = 1

Output = 8


────────────────────────────────────

❌ Invalid

void add(int a = 10, int b)
{
}

Reason

Default parameter cannot
be followed by a
non-default parameter.


────────────────────────────────────

❌ Ambiguous Example

void show(int)
{
}

void show(int, int = 10)
{
}

show(5);

Reason

Compiler finds two
matching functions.

Result

Ambiguous Call Error

*/