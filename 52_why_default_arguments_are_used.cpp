/*
◆──────────────────────────◆
  52. Why Default Arguments Are Used
◆──────────────────────────◆

💡 Remember

Default Arguments reduce
unnecessary function calls.

They allow one function to work
with or without user input.

This makes code simpler,
cleaner and easier to use.

*/

#include <iostream>
using namespace std;

// Function
void greet(string name = "Guest")
{
    cout << "Welcome " << name;
}

// Main Function
int main()
{
    // Uses Default Value
    greet();

    cout << endl;

    // Uses User Value
    greet("Imran");

    return 0;
}

/*

Output

Welcome Guest
Welcome Imran

*/