/*
◆──────────────────────────◆
   53. One Default Parameter
◆──────────────────────────◆

💡 Remember

A function can have one
default parameter.

If no argument is passed,
the default value is used.

If an argument is passed,
the user value is used.

*/

#include <iostream>
using namespace std;

// Function
void show(int x = 100)
{
    cout << "Value : " << x;
}

// Main Function
int main()
{
    // Uses Default Value
    show();

    cout << endl;

    // Uses User Value
    show(50);

    return 0;
}

/*

Output

Value : 100
Value : 50

*/