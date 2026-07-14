/*
◆──────────────────────────◆
    49. Real World Example
◆──────────────────────────◆

💡 Remember
Same function,
different data types.

*/

#include <iostream>
using namespace std;

// Function 1
void print(int x)
{
    cout << "Age : " << x << endl;
}

// Function 2
void print(string name)
{
    cout << "Name : " << name;
}

// Main Function
int main()
{
    print("Imran");
    print(20);

    return 0;
}

/*
Output:
Name : Imran
Age : 20
*/
