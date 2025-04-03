// Stack Imlementing Using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
    }
    return top;
}

int pop(struct node **top)
{
    int x;
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct node *n = (*top);
        *top = (*top)->next;
        x = n->data;
        free(n);
    }
    return x;
}

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int peek(struct node *top, int pos)
{
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{
    struct node *top = NULL; // top = head
    // top = (struct node *)malloc(sizeof(struct node));
    isEmpty(top);
    isFull(top);
    top = push(top, 23);
    top = push(top, 54);
    top = push(top, 39);
    top = push(top, 22);
    //int element = pop(&top);
    //printf("Popped Element : %d\n", element);
    traversal(top);
    for (int j = 0; j < 4; j++)
    {
        printf("Value at position %d is %d\n", j, peek(top, j + 1));
    }

    return 0;
} 