#include <stdio.h>
#include <stdlib.h> 
int size = 5;
int main()
{
    int *arr = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) arr[i] = i*2;

    //printing the elements
    for (int i = 0; i < size; i++) 
        printf("arr[%d] = %d\n", i , arr[i]);
        
}