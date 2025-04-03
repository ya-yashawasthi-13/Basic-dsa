#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Empty\n");
        return 1;
    }
    else
    {
        printf("Not Empty\n");
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Full\n");
        return 1;
    }
    else
    {
        printf("Not Full\n");
        return 0;
    }
}

int main()
{
    struct stack s;
    s.size = 20;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    s.arr[0] = 10;
    s.top++;
    //check stack is empty or not
    isEmpty(&s);
    //check stack is full or not
    isFull(&s);
    return 0;
}

