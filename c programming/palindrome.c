#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int c = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length; i++)
    {
        if (string1[i] == string1[length - i - 1])
        {
            c++;
        }
    }
    if(c== length){
        printf("is a palindrome");
    }

    else {
        printf("not a palindrome");
    }
}
