 #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *head;

    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = (struct node *)malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign data values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;

    head = one;

    struct node *itr = head;

    while (itr != NULL)
    {
        printf("%d \n", itr->data);
        itr = itr->next;
    }
    return 0;
} 

