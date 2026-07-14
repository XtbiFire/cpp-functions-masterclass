/*
◆──────────────────────────◆
  70. Return by Value Final Boss
◆──────────────────────────◆

💡 Remember

Return by Value Revision:

✔ Function sends value back
✔ return ends function
✔ Return type must match value
✔ Expression can be returned
✔ Returned value can be reused

*/

#include <iostream>
#include <string>
using namespace std;


// Returning int
int add(int a, int b)
{
    return a + b;
}


// Returning float
float price()
{
    return 99.5f;
}


// Returning char
char grade()
{
    return 'A';
}


// Returning string
string name()
{
    return "Imran";
}


// Main Function
int main()
{
    cout << "Sum : " << add(10, 20) << endl;

    cout << "Price : " << price() << endl;

    cout << "Grade : " << grade() << endl;

    cout << "Name : " << name() << endl;


    return 0;
}

/*

Output

Sum : 30
Price : 99.5
Grade : A
Name : Imran


────────────────────────

Final Revision


int
  ↓
return number


float
  ↓
return decimal


char
  ↓
return character


string
  ↓
return text


return
  ↓
Ends Function

*/
