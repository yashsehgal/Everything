#include <stdio.h>
struct Stack
{
    int arr[5];
    int tos;
};

void push(struct Stack *, int);
int pop(struct Stack *);

void main()
{
    struct Stack S;
    S.tos = -1;
    int x, ch;
    do
    {
        printf("\n Select a option");
        printf("\n1.Push \n2.pop \n3.exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter an element to push:");
            scanf("%d", &x);
            push(&S, x);
            break;
        case 2:
            x = pop(&S);
            if (x != 0)
            {
                printf("Popped element is %d", x);
            }
            break;
        case 3:
            ch = 0;
            break;
        default:
            printf("Wrong input please try again!");
        }
    } while (ch != 0);
}
void push(struct Stack *p, int x)
{
    if (p->tos == 4)
    {
        printf("\n Stack Overflow!");
        return;
    }
    p->tos = p->tos + 1;
    p->arr[p->tos] = x;
    printf("\n pushed Element is %d", x);
}
int pop(struct Stack *p)
{
    int x;
    if (p->tos == -1)
    {
        printf("Stack Underflow!");
        return 0;
    }
    x = p->arr[p->tos];
    p->tos = p->tos - 1;
    return x;
}
