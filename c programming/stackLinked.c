#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};
struct node *getNode(int data);
void push(struct node *head, int data);
void printData(struct node *head);

int main()
{
    struct node* head = NULL;
    push(head, 45);
    printData(head);
        
}

struct node* getNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct node* head, int data)
{
    struct node* temp = getNode(data);
    if(head == NULL)
    {
        head = temp;
    }

    else
    {
        temp->next = head;
        head = temp;
    };
}

void pop(struct node*head, int* top)
{
    if (head == NULL)
    {
        printf("list is empty");
    }
    else 
    {
        struct node* temp = head;
        head = head->next;
        free(temp);
    }
}

void printData(struct node *head)

{
    if (head == NULL)
        printf("list empty\n");
    int count = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        printf("data in node %d is %d\n", count, ptr->data);
        ptr = ptr->next;
    }
}