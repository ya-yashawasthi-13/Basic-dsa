// creating node on c
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;                          // pointer declare for first node
    head = (struct node *)malloc(sizeof(struct node)); // store memeory address of node in head

    //  assign data values
    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
}