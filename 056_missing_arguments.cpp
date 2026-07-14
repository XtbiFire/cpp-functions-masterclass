/*
◆──────────────────────────◆
      56. Missing Arguments
◆──────────────────────────◆

💡 Remember

When some arguments are missing,
the compiler automatically fills
them with default values.

Only the missing arguments
receive default values.

*/

#include <iostream>
using namespace std;

// Function
void add(int a, int b = 10, int c = 20)
{
    cout << "Sum : " << a + b + c;
}

// Main Function
int main()
{
    // Missing b and c
    add(5);

    cout << endl;

    // Missing c
    add(5, 2);

    cout << endl;

    // No Missing Arguments
    add(5, 2, 1);

    return 0;
}

/*

Output

Sum : 35
Sum : 27
Sum : 8

*/
