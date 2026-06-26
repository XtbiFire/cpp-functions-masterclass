/*
◆──────────────────────────◆
28. Prototype Syntax
◆──────────────────────────◆

💡 Remember
return_type function_name(parameters);

*/

#include <iostream>
using namespace std;

// Function Prototype
int add(int, int);

// Main Function
int main()
{
    // Function Call
    cout << add(10, 20);

    return 0;
}

// Function Definition
int add(int a, int b)
{
    return a + b;
}

/*
Output:
30
*/