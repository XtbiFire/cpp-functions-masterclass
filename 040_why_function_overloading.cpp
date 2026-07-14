/*
◆──────────────────────────◆
40. Why Function Overloading?
◆──────────────────────────◆

💡 Remember
One Name
Multiple Data Types

*/

#include <iostream>
using namespace std;

// Overloaded Functions
void print(int x)
{
    cout << "Number : " << x << endl;
}

void print(string text)
{
    cout << "Text : " << text;
}

// Main Function
int main()
{
    print(100);
    print("Imran");

    return 0;
}

/*
Output:
Number : 100
Text : Imran
*/
