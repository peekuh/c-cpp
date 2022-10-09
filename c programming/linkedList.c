#include <stdio.h>
#include <stdlib.h>

//creating the node data type using a self referential structure
struct node {
    int data;
    struct node *link;
};

int main()
{
    // creating "head" pointer which points to struct node
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    //address of block of memory allocated for first node to "head"
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)v(sizeof(struct node));

    //accessing struct members using arrow operator
    head->data = 45;
    head->link = second;

    second->data = 90;
    second->link = third;

    third->data = 135;
    third->link = NULL;
    
}