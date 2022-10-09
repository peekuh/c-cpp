#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int length(struct node* head);
void printData(struct node *head);
struct node* lastInsert(struct node *head, int a);
struct node *firstInsert(struct node *head, int a);

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* current = (struct node*)malloc(sizeof(struct node));
    
    //setting up the head 
    head->data = 45;
    head->link = current;
    
    //setting up the second node
    current->data = 50;
    current->link = NULL;
    
    //reusing current pointer to construct third node
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;
    
    //updating 2nd node's link to third node's address
    head->link->link = current;
    printf("length of list is: %d\n", length(head));
    printData(head);
    lastInsert(head, 67);
    lastInsert(head, 83);
    lastInsert(head, 90);
    printf("%d\n", head);
    head = firstInsert(head, 78);
    printData(head);    
    
}

int length(struct node* head)
{
    int count = 0;
    if (head == NULL)
        printf("list is empty\n");
    struct node* ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    return count;
}

void printData(struct node *head)

{
    if( head == NULL)
        printf("list empty\n");
    int count = 0;
    struct node* ptr = head;
    while(ptr != NULL)
    {
        count++;
        printf("data in node %d is %d\n", count, ptr->data);
        ptr = ptr->link;
    }
}

struct node* lastInsert(struct node* head, int a)

{
    struct node* temp, *ptr;
    //creating the new node
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = a;
    //setting link to NULL because last node
    ptr->link = NULL;
    if (head == NULL)
        head  = ptr;
    else 
    {
    //(ptr->link != NULL) used instead of (ptr != NULL)because we need to retain the pointer to last node of previous list i.e we need to stop the loop before pointer becomes NULL.
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
    }
return ptr;
}

struct node* firstInsert(struct node* head, int a)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = a;
    ptr->link = head;
    head = ptr;
    return head;
}