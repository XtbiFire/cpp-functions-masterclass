/*
◆──────────────────────────◆
26. Function Prototype
◆──────────────────────────◆

💡 Remember
Prototype tells compiler
about function before
its definition.

*/

#include <iostream>
using namespace std;


// Function Prototype
int add(int, int);


// Main Function
int main()
{
    // Function Call
    cout << add(5, 3);

    return 0;
}


// Function Definition
int add(int a, int b)
{
    return a + b;
}

/*
Output:
8
*/