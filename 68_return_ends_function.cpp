/*
◆──────────────────────────◆
   68. return Ends Function
◆──────────────────────────◆

💡 Remember

When return executes,
the function immediately stops.

Any code written after
return will never run.

*/

#include <iostream>
using namespace std;

// Function
int number()
{
    cout << "Start" << endl;

    return 10;

    cout << "End";
}

// Main Function
int main()
{
    cout << number();

    return 0;
}

/*

Output

Start
10


Note:

"End" is not printed

because return ended
the function.

*/