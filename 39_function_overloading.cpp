/*
◆──────────────────────────◆
   39. Function Overloading
◆──────────────────────────◆

💡 Remember
Same Name
Different Parameters

*/

#include <iostream>
using namespace std;

// Overloaded Functions
void show(int x)
{
    cout << "Integer : " << x << endl;
}

void show(float x)
{
    cout << "Float : " << x;
}

// Main Function
int main()
{
    show(10);
    show(5.5f);

    return 0;
}

/*
Output:
Integer : 10
Float : 5.5
*/