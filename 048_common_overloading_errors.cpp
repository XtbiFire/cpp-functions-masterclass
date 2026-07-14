/*
◆──────────────────────────◆
48. Common Overloading Errors
◆──────────────────────────◆

💡 Remember
Return type alone
cannot overload.

*/

#include <iostream>
using namespace std;

// Correct
void print(int x)
{
    cout << x;
}

/*
// Wrong

int print(int x)
{
    return x;
}
*/

// Main Function
int main()
{
    print(50);

    return 0;
}

/*
Output:
50
*/
