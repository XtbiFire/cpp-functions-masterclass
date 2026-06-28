/*
◆──────────────────────────◆
      64. Returning float
◆──────────────────────────◆

💡 Remember

A float function returns
decimal values.

The return type and returned
value should match.

*/

#include <iostream>
using namespace std;

// Function
float getPrice()
{
    return 99.99f;
}

// Main Function
int main()
{
    cout << "Price : " << getPrice();

    return 0;
}

/*

Output

Price : 99.99

*/