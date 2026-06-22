#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(add(1,2), add(3,4));

    return 0;
}