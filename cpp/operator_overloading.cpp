#include <iostream>

using namespace std;

class number
{
public:
    int n;
    //making default constructor
    number()
    {
        n = 0;
    }
    //making parametrized constructor 
    number(int set_n)
    {
        n = set_n;
    }
    // setting operator overload
    number operator + (number num)
    {
        number temp;
        temp.n = n + num.n;
        return temp;
    }
    // setting display function
    void display()
    {
        cout << "n: " << n << endl;
    }
};

int main()
{
    number a(5);
    number b(10);
    
    number c = a + b;
    c.display();
}