/*
◆──────────────────────────◆
      57. Right-to-Left Rule
◆──────────────────────────◆

💡 Remember

Default arguments must be
declared from right to left.

A parameter with a default value
cannot be followed by a parameter
without a default value.

*/

#include <iostream>
using namespace std;

// Valid Function
void add(int a, int b = 10, int c = 20)
{
    cout << "Sum : " << a + b + c;
}

// Main Function
int main()
{
    add(5);

    cout << endl;

    add(5, 2);

    cout << endl;

    add(5, 2, 1);

    return 0;
}

/*

Output

Sum : 35
Sum : 27
Sum : 8

------------------------------------------------

❌ Invalid Example

void add(int a = 10, int b)
{
}

Reason:
A default parameter cannot
be followed by a non-default
parameter.

*/