# https://www.facebook.com/fort.m.7/posts/385714229262556
# Subscribed by voice kaushik

//Display a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;struct node *next;
}*first;
void create(int A[],int n)
{
    int i;
    struct node *last,*t;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *fi)
{
    printf("\nThe linked list is : ");
    while(fi!=NULL)
    {
        printf("%d ",fi->data);
        fi=fi->next;
    }
}
int main()
{
    printf("How many elements you want to enter ? : ");
    int n;
    scanf("%d",&n);//input the number of elements
     printf("\nEnter the elements  ? :  ");

    int A[n];//array created
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);//input the elements
    }

    create(A,n);//creating the linked list

    display(first);//display the linked list
}
