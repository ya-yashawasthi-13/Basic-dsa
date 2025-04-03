// Menu driven Program for push, pop, peek, display
#include <stdio.h>
#define MAX 10
int push(int arr[], int top);
int pop(int arr[], int top);
void display(int arr[], int top);
void peek(int arr[], int top);

int main()
{
    int arr[MAX];
    int top = -1;
    int choice;
    while (1)
    {
        printf("Enter 1 for Push\n");
        printf("Enter 2 for Pop\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for Peek\n");
        printf("Enter 5 for Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            top = push(arr, top);
            break;
        case 2:
            top = pop(arr, top);
            break;
        case 3:
            display(arr, top);
            break;
        case 4:
            peek(arr, top);
            break;
        case 5:
            return -1;
            break;
        }
    }
}

int push(int arr[], int top)
{
    if (top == MAX - 1)
    {
        printf("Stack is  Full\n");
    }
    else
    {
        int x;
        printf("Enter Element:");
        scanf("%d", &x);
        top++;
        arr[top] = x;
    }
    return top;
}

int pop(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        top--;
    }
    return top;
}

void display(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        while (top != -1)
        {
            printf("%d\n", arr[top]);
            top--;
        }
    }
}

void peek(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top Element : %d\n", arr[top]);
    }
}