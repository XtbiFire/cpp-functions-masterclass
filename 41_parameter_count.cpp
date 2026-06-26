/*
◆──────────────────────────◆
   41. Parameter Count
◆──────────────────────────◆

💡 Remember
Different number of parameters
creates overloading.

*/

#include <iostream>
using namespace std;

// Function 1
void add(int a)
{
    cout << a << endl;
}

// Function 2
void add(int a, int b)
{
    cout << a + b;
}

// Main Function
int main()
{
    add(10);
    add(10, 20);

    return 0;
}

/*
Output:
10
30
*/