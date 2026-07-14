/*
◆──────────────────────────◆
19. Block Scope
◆──────────────────────────◆

💡 Remember
A variable declared inside
a block can be used only
within that block.

*/

#include <iostream>
using namespace std;

// Main Function
int main()
{
    // Block
    {
        int x = 5;

        cout << x;
    }

    return 0;
}

/*
Output:
5
*/
