#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int Subtract(int a, int b)
{
    return a - b;
}

void main()
{
    cout << "Calculator App \n";
    cout << "2 + 3 = " << add(2, 3);
    cout << "5 - 2 = " << Subtract(5, 2);
}