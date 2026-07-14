/*
◆──────────────────────────◆
   36. Declaration vs Definition
◆──────────────────────────◆

💡 Remember
Declaration = Tells
Definition = Does

*/

#include <iostream>
using namespace std;

// Declaration
void hello();

// Main Function
int main()
{
    hello();

    return 0;
}

// Definition
void hello()
{
    cout << "Hello, World!";
}

// Output:
// Hello, World!
