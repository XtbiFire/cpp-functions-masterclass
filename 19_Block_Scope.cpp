/*
Topic: Block Scope
Author: Imran

Variable inside a block exists
only inside that block.
*/

#include <iostream>
using namespace std;

int main()
{
    {
        int x = 5;

        cout << x;
    }

    return 0;
}