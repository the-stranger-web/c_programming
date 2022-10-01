// [create and display circular doubly linked list]

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start, *tail;

void createlist()
{
    struct node *t;
    int n,i;
    printf("Enter no. of nodes:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&t->data);
        if (start == NULL)
        {
            t->next = t;
            t->prev = t;
            start = t;
            tail = t;
        }
        else
        {
            t->next = start;
            t->prev = tail;
            tail->next = t;
            start->prev = t;
            tail = t;
        }
    }
}

void display()
{
    struct node *t;
    t = start;
    if (start == tail)
        printf("%d\n",start->data);
    else
    {
        while (t->next != start)
        {
            printf("%d\n",t->data);
            t = t->next;
        }
        printf("%d\n",t->data);
    }
}

void main()
{
    int data;
    start = NULL;
    tail = NULL;
    createlist();
    display();
}