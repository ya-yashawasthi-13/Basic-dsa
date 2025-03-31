// deleting nodes all programs via function
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// transversing function
void transverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

// delete  first node function
/* struct node *delete_first(struct node *head)
{
    struct node *ptr = head;
    ptr = head->next;
    free(head);
    return head;
}*/

// delete last node
void delete_last(struct node *head)
{
    struct node *ptr = head;
    struct node *ref = ptr->next;
    while (ptr != NULL)
    {
        ptr = ref;
        ptr = ptr->next;
    }
    ref->next = NULL;
    free(ptr);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 25;
    fifth->next = NULL;

    // transversing funcion
    printf("Before \n");
    transverse(head);

    // deleting first node
    /* head = delete_first(head);
    printf("After ");
    transverse(head); */

    // deleting after given index
    // delete_index(head);
    // transverse(head);

    // deleting last node
     delete_last(head);
    // delete_lastt(head);
    printf("After \n");
    transverse(head);

    // deleting in between
    // delete_between(head);
    // transverse(head);

    return 0;
}
