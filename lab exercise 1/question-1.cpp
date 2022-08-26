// Write a C++ Program to Swap Numbers in Cyclic Order Using Call by Reference.

#include <iostream>
using namespace std;

void swap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main()
{
    int a, b, c;

    cout << "enter values: ";
    cin >> a >> b >> c;

    cout << "before swapping: " << endl;
    cout << "a, b, c: " << a << ", " << b << ", " << c << endl;

    swap(&a, &b, &c);

    cout << "after swapping " << endl;
    cout << "a, b, c: " << a << ", " << b << ", " << c << endl;

    return 0;
}
