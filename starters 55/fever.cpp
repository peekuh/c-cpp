#include <iostream>
using namespace std;

int main()
{
    int T, x;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x;
        if (x > 98)
        {
            cout << "yes" << endl;
        }
        else 
        {
            cout << "no"  << endl;
        }
    }
    return 0;
}
