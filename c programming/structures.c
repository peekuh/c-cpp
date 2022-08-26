#include <stdio.h>
#include <string.h>

struct students
{
    int rollno;
    char name[20];
    int cgpa;
};

int main()
{
    int i;
    struct students st[5];
    for (i = 0; i < 5; i++)
    {
        printf("enter the name: ");
        scanf("%s", st[i].name);

        printf("enter the cgpa: ");
        scanf("%d", &st[i].cgpa);
        
        printf("enter the roll no: ");
        scanf("%d", &st[i].rollno);
    }
}