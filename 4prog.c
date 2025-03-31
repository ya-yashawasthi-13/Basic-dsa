
// count number of nodes in linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked List is Leaked");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
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

    count_nodes(head); // no. of nodes

    return 0;
}