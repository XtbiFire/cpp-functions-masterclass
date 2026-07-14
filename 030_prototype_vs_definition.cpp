/*
◆──────────────────────────◆
30. Prototype vs Definition
◆──────────────────────────◆

💡 Remember
Prototype = No Body
Definition = Has Body

*/

#include <iostream>
using namespace std;

// Function Prototype
int square(int);

// Main Function
int main()
{
    // Function Call
    cout << square(5);

    return 0;
}

// Function Definition
int square(int x)
{
    return x * x;
}

/*
Output:
25
*/
