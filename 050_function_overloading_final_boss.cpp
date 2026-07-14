/*
◆──────────────────────────◆
50. Function Overloading Test
◆──────────────────────────◆

💡 Remember
Same Name +
Different Parameters

*/

#include <iostream>
using namespace std;

// Function 1
void show(int x)
{
    cout << "Integer : " << x << endl;
}

// Function 2
void show(float x)
{
    cout << "Float : " << x << endl;
}

// Function 3
void show(char x)
{
    cout << "Character : " << x;
}

// Main Function
int main()
{
    show(10);
    show(5.5f);
    show('A');

    return 0;
}

/*
Output:
Integer : 10
Float : 5.5
Character : A
*/
