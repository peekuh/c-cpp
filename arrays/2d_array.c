#include <stdio.h>
int main(void)
{
    int i, j;
    int r, c;
    int arr[3][4];
    // getting user input
    printf("enter the number of rows: ");
    scanf("%d", &r);
    printf("enter the number of columns: ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    // displaying the array
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}