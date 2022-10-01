// [implementation linear queue using array]
/*
#include <stdio.h>

#define maxsize 5
int Q[maxsize];
int F = -1, R = -1;

void enQ()
{
    int value;
    if (R == (maxsize-1))
        printf("Overflow.\n");
    else
    {
        if ((F == -1) && (R == -1))
        {
            F = 0;
            R = 0;
        }
        else
            R++;
    }
    printf("Enter value to be inserted:\n");
    scanf("%d",&value);
    Q[R] = value;
}

void deQ()
{
    if (F == -1)
        printf("Underflow.\n");
    else
    {
        printf("%d is deleted.\n",Q[F]);
        if (F == R)
        {
            F = -1;
            R = -1;
        }
        else
            F++;
    }
}

void display()
{
    int i;
    if (F == -1)
        printf("Q is empty.\n");
    else
    {
        for (i = F; i <= R; ++i)
            printf("%d\n",Q[i]);
    }
}

void main()
{
    int c,value;
    while (1)
    {
        printf("Enter your choice:\n1-Insert\n2-Delete\n3-Display\n4-Quit\n");
        scanf(" %d",&c);
        switch (c)
        {
            case 1:enQ();
                break;
            case 2:deQ();
                break;
            case 3:display();
                break;
            case 4:
                return;
            default:printf("Wrong choice.\n");
        }
    }
}
 */