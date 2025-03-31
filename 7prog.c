// add node at beginning of the linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add_begg(struct node *head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 44;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 66;
    ptr->link = NULL;

    head->link = ptr;

    int data = 22;

    head = add_begg(head, data);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}