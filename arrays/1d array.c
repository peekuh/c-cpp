#include <stdio.h>

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