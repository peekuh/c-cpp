#include <iostream>
using namespace std;

int main()
{
    int T, x, y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> y;
        if (x == y)
        {
            cout << "ANY" << endl;
        }
        else if (x > y)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "REPAIR" << endl;
        }
    }
    return 0;
}