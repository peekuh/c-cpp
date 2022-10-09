#include <stdio.h>


int main()
{
    int T, x, y;
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", x, y);
        for (int i = y; ; i++)
        {
            for (int j = y; ; j++)
            {
                if (i + j == 3*x - y)
                {
                    printf("%d %d %d", i, y, j);
                    break;
                }
            }
        }

    }
    return 0;
}
