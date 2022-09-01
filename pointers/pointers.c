#include <stdio.h>

int main()
{
    int x = 14;
    int *ptr = &x;
    printf("%d\n", ptr);
    printf("value at %d address is %d\n", ptr, *ptr);

    *ptr = 21;
    printf("value at %d address is %d", ptr, *ptr);
}