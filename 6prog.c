

// add node at end of linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_node(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    printf("%d\n", *temp);
}

int main()
{

    struct node *head = NULL;                          // pointer declare for first node
    head = (struct node *)malloc(sizeof(struct node)); // store memeory address of node in head

    //  assign data values
    head->data = 45;
    head->link = NULL;

    printf("%d\n", head->data);

    struct node *current = malloc(sizeof(struct node));
    current->data = 55;
    current->link = NULL;
    head->link = current;

    printf("%d %d %d\n", current->data, *current, &current);

    struct node *last = malloc(sizeof(struct node));
    last->data = 34;
    last->link = NULL;
    current->link = last;

    printf("%d %d %d\n", last->data, *last, &last);

    add_node(head, 45);
    return 0;
}