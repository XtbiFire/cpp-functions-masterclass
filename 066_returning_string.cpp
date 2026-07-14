/*
◆──────────────────────────◆
      66. Returning String
◆──────────────────────────◆

💡 Remember

A string function returns
a group of characters
(text value).

String values are written
inside double quotes (" ").

*/

#include <iostream>
#include <string>
using namespace std;

// Function
string getName()
{
    return "Imran";
}

// Main Function
int main()
{
    cout << "Name : " << getName();

    return 0;
}

/*

Output

Name : Imran

*/
