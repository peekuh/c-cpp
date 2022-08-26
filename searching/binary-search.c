#include <stdio.h>

int main(){
    int arr[] = {12, 23, 35, 41, 50, 68, 72, 87, 99, 177};
    int low, high, mid, a, n;

    printf("which number are u looking for? ");
    scanf("%d", &a);
    n = sizeof(arr) / sizeof(arr[0]);
    mid = (n-1)/2;
    for(int i = 0; i < n; i++)
    {
        if(a== arr[mid]){
            printf("element found at %d index", mid);
            break;
        }

        else if (a > arr[mid])
        {
            low = mid;
            high = (n-1);
        }
        
        else {
            low = 0;
            high = mid;
        }
        mid = (low + high) / 2;
    }
}