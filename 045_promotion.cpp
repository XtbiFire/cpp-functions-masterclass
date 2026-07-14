/*
◆──────────────────────────◆
       45. Promotion
◆──────────────────────────◆

💡 Remember
If exact match is not found,
compiler uses promotion.

*/

#include <iostream>
using namespace std;

// Function 1
void show(int x)
{
    cout << "Integer";
}

// Function 2
void show(long x)
{
    cout << "Long";
}

// Main Function
int main()
{
    char ch = 'A';

    show(ch);

    return 0;
}

/*
Output:
Integer
*/
