#include <iostream>
using namespace std;

int main()
{
    int T, x, y, a, b, c;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> y; // x is mean y is median
        for (int i = y; ; i++)
        {
            for (int j = y; ; j++)
            {
                if (i + j == 3*x - y)
                {
                    cout << i << y << j;
                }
            }
        }

    }
    return 0;
}
