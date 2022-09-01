#include <stdio.h>

int main() {
    int numbers[5];
    int *ptr = numbers; 
    //no need to use &numbers arrays name is pointer to itself.
    int v = 2;
    for(;ptr < &numbers[5]; ptr++) 
    {
        *ptr = v;
        v = v*2;
    }

    for(int i = 0; i < 5; i++) 
    {
        printf("%d\n", numbers[i]);
    }
}