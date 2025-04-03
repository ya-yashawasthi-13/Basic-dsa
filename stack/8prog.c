// inserting node all programs via functiona 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// transversing function
void transverse_print(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
};

// insert at beginning
/*void insert_at_beginning(struct node *head_ref)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 5;

    new_node->next = head_ref;
    head_ref = new_node;

    struct node *ptr = head_ref;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}*/

// insert in between
/*void insert_in_between(struct node *ref)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = 35;

    ptr->next = ref->next;
    ref->next = ptr;

    while (ref != NULL)
    {
        printf("%d \n ", ref->data);
        ref = ref->next;
    }
}*/

// insert at end
/* void insert_at_end(struct node *ref)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 60;
    ptr->next = NULL;
    struct node *temp = ref;

    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            temp->next = ptr;
            break;
        }
        temp = temp->next;
    }
    temp = ref;
    while (ref != NULL)
    {
        printf("%d \n", ref->data);
        ref = ref->next;
    }
} */

// insert after a node and node index is given
/* void insert_after_index(struct node *ref, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = 36;
    struct node *temp = ref;

    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    temp->next = ptr;

    temp = ref;

    while (ref != NULL)
    {
        printf("%d \n", ref->data);
        ref = ref->next;
    }
}*/
// main function for all functions
int main()
{

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    transverse_print(head);
    //  insert_at_beginning( head);
    // insert_in_between(head);
    // insert_at_end(head);
    // insert_after_index(head, 4 ); // insert after a node and node index is given

    return 0;
}