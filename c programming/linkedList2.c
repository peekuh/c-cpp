#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int length(struct node* head);
void printData(struct node *head);
struct node* lastInsert(struct node *head, int a);
struct node* firstInsert(struct node *head, int a);
struct node *midInsert(struct node *head, int a, int position);
struct node *delete (struct node *head, int position);

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
    midInsert(head, 69, 3);
    printf("list after inserting:\n");
    printData(head);
    delete(head, 7);
    printf("list after deletion: \n");
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

struct node* midInsert(struct node* head, int a, int position)
{
    //creating variable to traverse the list 
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current = head;
    //traversing up until the node before the position where new node has to be inserted
    for(int i = 1; i < position - 1; i++)
    { 
        current = current->link;
    }
    //current now holds the address of the node before position node
    //create new node 
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = a;
    //assigning new node's link to address of node currently at position
    temp->link = current->link;
    //assigning the link of the node before position to temp
    current->link = temp;
}

struct node* delete(struct node* head, int position)
{
    struct node* temp;
    if (position == 1)
    {
        temp = head;
        head  = head->link;
        free(temp);
    }
    else 
    {
        struct node* current = head;
        for(int i = 1; i < position - 1; i++)
        {
            current = current->link;
        }
        temp = current->link;
        current->link = current->link->link;
        free(temp);
    }
}