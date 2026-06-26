/*
◆──────────────────────────◆
27. What Is a Prototype
◆──────────────────────────◆

💡 Remember
Prototype is a function
declaration placed before
its definition.

*/

#include <iostream>
using namespace std;

// Function Prototype
void display();

// Main Function
int main()
{
    // Function Call
    display();

    return 0;
}

// Function Definition
void display()
{
    cout << "Prototype Example";
}

/*
Output:
Prototype Example
*/