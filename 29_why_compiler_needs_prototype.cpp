/*
◆──────────────────────────◆
   29. Why Compiler Needs It
◆──────────────────────────◆

💡 Remember
Compiler reads code from top to bottom.

*/

#include <iostream>
using namespace std;

// Prototype
void welcome();

// Main Function
int main()
{
    welcome();

    return 0;
}

// Function Definition
void welcome()
{
    cout << "Compiler already knows me!";
}