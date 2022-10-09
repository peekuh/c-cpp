#define _GNU_SOURCE
#include <stdio.h>
int BinarySearch(int a, int n, int *arr);
int cmpfunc(const void *a , const void *b);

int main(){
    int x, size;
    printf("enter the number of elements in the array: ");
    scanf("%d", &size);
    int numbers[size];
    //getting the array from the user
    for (int i = 0; i < size; i++)
    {
        printf("enter the element: ");
        scanf("%d", numbers[i]);
    }
    printf("enter the element you want to search for: ");
    scanf("%d", &x);
    //sorting the array
    qsort(numbers, size, sizeof(int), cmpfunc);
    //printing the sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d", numbers[i]);
    }
    printf("index found at: %d", BinarySearch(x, size, numbers));
}

int BinarySearch(int a, int n, int *arr)
{
    int low, high, mid;
    mid = (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        if (a == arr[mid])
        {
            return mid;
            break;
        }

        else if (a > arr[mid])
        {
            low = mid;
            high = (n - 1);
        }

        else
        {
            low = 0;
            high = mid;
        }
        mid = (low + high) / 2;
    }
}

int cmpfunc(const void *a , const void *b)
{
    return( *(int*)a - *(int*)b);
}