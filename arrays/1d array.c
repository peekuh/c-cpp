#include <stdio.h>
void insert(int array, int element, int index);

int main(void)
{
    int arr[10];
    int n,i;
    // accepting input from user
    printf("enter the size of the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("enter the element: ");
        scanf("%d", &arr[i]);
    }
    // displaying the array
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }



}

void insert(int array, int element, int index) 
{
    int n = sizeof(array)/sizeof(int);
    for(int i = n - 1; i > index - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[index-1] = element;
}

void delete(int array, int index)
{
    
}