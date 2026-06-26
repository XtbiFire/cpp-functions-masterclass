/*
◆──────────────────────────◆
   42. Parameter Types
◆──────────────────────────◆

💡 Remember
Different parameter types
also create overloading.

*/

#include <iostream>
using namespace std;

// Function 1
void print(int x)
{
    cout << "Integer : " << x << endl;
}

// Function 2
void print(float x)
{
    cout << "Float : " << x << endl;
}

// Function 3
void print(char x)
{
    cout << "Character : " << x;
}

// Main Function
int main()
{
    print(10);
    print(5.5f);
    print('A');

    return 0;
}

/*
Output:
Integer : 10
Float : 5.5
Character : A
*/