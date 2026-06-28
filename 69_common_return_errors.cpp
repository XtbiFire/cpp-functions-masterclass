/*
◆──────────────────────────◆
   69. Common Return Errors
◆──────────────────────────◆

💡 Remember

Common mistakes while using
return keyword:

1. Missing return
2. Wrong return type
3. Unreachable code
4. Returning wrong value

*/

#include <iostream>
#include <string>
using namespace std;


// ✅ Correct Example

int add(int a, int b)
{
    return a + b;
}


// Main Function
int main()
{
    cout << "Sum : " << add(10, 20);

    return 0;
}


/*

Output

Sum : 30


────────────────────────────

❌ Error 1

int number()
{
    cout << 10;
}

Reason:

int function should return
an integer value.


────────────────────────────

❌ Error 2

int number()
{
    return "Hello";
}

Reason:

int function cannot return
string value.


────────────────────────────

❌ Error 3

int fun()
{
    return 5;

    cout << "Hello";
}

Reason:

Code after return
never executes.

*/