#include <stdio.h>

void swap(int *pa, int *pb);

int main()
{
    int a, b;
    a = 1;
    b = 2;
    swap(&a, &b);
    printf ("%d %d", a, b);
}

void swap(int *pa, int *pb)
{   
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}