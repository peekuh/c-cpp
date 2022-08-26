// Write a C++ program to find the value of a number raised to its power using call by value.
#include <iostream>
using namespace std;

int main()
{

    int low, high, i;
    bool is_prime = true;

    cout << "Enter two no.s : ";
    cin >> low >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high)
    {
        is_prime = true;

        // 0 and 1 are not prime numbers
        if (low == 0 || low == 1)
        {
            is_prime = false;
        }

        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << low << ", ";

        ++low;
    }

    return 0;
}
