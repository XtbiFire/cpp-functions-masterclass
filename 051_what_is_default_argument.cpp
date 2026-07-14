/*
◆──────────────────────────◆
    51. What Is Default Argument
◆──────────────────────────◆

💡 Remember

Default Argument =
A predefined value given to a parameter.

If the user does not pass an argument,
the function automatically uses
the default value.

*/

#include <iostream>
using namespace std;

// Function
void greet(string name = "Guest")
{
    cout << "Hello " << name;
}

// Main Function
int main()
{
    greet();

    return 0;
}

/*

Output

Hello Guest

*/
