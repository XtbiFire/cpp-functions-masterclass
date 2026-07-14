/*
◆──────────────────────────◆
55. User Value vs Default Value
◆──────────────────────────◆

💡 Remember

If the user passes an argument,
the default value is ignored.

If the user does not pass an argument,
the default value is used.

User Value always gets higher priority.

*/

#include <iostream>
using namespace std;

// Function
void show(int x = 100)
{
    cout << "Value : " << x << endl;
}

// Main Function
int main()
{
    // Default Value
    show();

    // User Value
    show(50);

    // Another User Value
    show(999);

    return 0;
}

/*

Output

Value : 100
Value : 50
Value : 999

*/
