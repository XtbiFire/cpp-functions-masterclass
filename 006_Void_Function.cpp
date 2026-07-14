/*
◆──────────────────────────◆
06. Void Function
◆──────────────────────────◆

💡 Remember
Void returns nothing,
but can print output.

*/

#include <iostream>
using namespace std;

// Function Definition
void add(int a, int b)
{
    cout << a + b;
}

// Main Function
int main()
{
    // Function Call
    add(2, 3);

    return 0;
}

/*
Output:
5
*/
