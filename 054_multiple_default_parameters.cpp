/*
◆──────────────────────────◆
 54. Multiple Default Parameters
◆──────────────────────────◆

💡 Remember

A function can have
multiple default parameters.

The compiler uses the default
value only for the arguments
that are missing.

*/

#include <iostream>
using namespace std;

// Function
void add(int a = 10, int b = 20)
{
    cout << "Sum : " << a + b;
}

// Main Function
int main()
{
    // Uses Both Default Values
    add();

    cout << endl;

    // Uses One User Value
    add(5);

    cout << endl;

    // Uses Both User Values
    add(5, 2);

    return 0;
}

/*

Output

Sum : 30
Sum : 25
Sum : 7

*/
