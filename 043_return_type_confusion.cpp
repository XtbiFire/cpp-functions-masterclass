/*
◆──────────────────────────◆
 43. Return Type Confusion
◆──────────────────────────◆

💡 Remember
Return type alone cannot
create overloading.

*/

#include <iostream>
using namespace std;

// Correct Function
int show(int x)
{
    return x;
}

/*
// Wrong (Compilation Error)

float show(int x)
{
    return x;
}
*/

// Main Function
int main()
{
    cout << show(10);

    return 0;
}

/*
Output:
10
*/
