//program to implement strlen() function using pointers 

#include <stdio.h>
#include <string.h>

int strlength(char *s);

int main()
{
    char string[50];
    int n;
    printf("enter the string: ");
    scanf("%s", string);
    n = strlength(string);
    printf("%d", n);
    
}

int strlength(char *s)
{
    int n;
    for (n = 0; *s != '\0'; s++)
    {
        n++;
    }
    return n;
}