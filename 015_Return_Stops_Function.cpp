/*
◆──────────────────────────◆
15. Return Stops Function
◆──────────────────────────◆

💡 Remember
Code after return
never executes.

*/

#include <iostream>
using namespace std;

// Function Definition
int test()
{
    cout << "A";

    return 5;

    cout << "B";
}

// Main Function
int main()
{
    // Function Call
    test();

    return 0;
}

/*
Output:
A
*/
