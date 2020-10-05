# https://www.facebook.com/permalink.php?story_fbid=180106856999528&id=100050006454252
# subscibe by Aditya Girishkumar

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Queue
{

    int front,rear,capacity;
    int *ptr;
};
struct Queue* createQueue(int cap)
{
    struct Queue *Q;
    Q=(struct Queue*)malloc(sizeof(struct Queue));
    Q->capacity=cap;
    Q->front=-1;
    Q->rear=-1;
    Q->ptr=(int*)malloc(sizeof(int)*cap);
    return Q;
}
void insertInQueue(struct Queue *Q,int data)
{
    if(Q->rear==Q->capacity-1 && Q->front==0 || Q->rear+1==Q->front)
    {
        printf("OverFlow");
    }
    else if(Q->rear==-1)
    {
        Q->front=0;
        Q->rear=0;
        Q->ptr[Q->rear]=data;
    }
    else if(Q->rear==Q->capacity)
    {
        Q->rear=0;
        Q->ptr[Q->rear]=data;
    }
    else
    {
        Q->rear+=1;
        Q->ptr[Q->rear]=data;
    }
}
void deleteValue(struct Queue *Q)
{
    if(Q->front==-1)
    {
        printf("Undeflow");
    }
    else if(Q->front==Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    else if(Q->front==Q->capacity-1)
        Q->front=0;
    else
    {
        Q->front+=1;
    }
}
void displayQueue(struct Queue *Q)
{
    int i;
    if(Q->front==-1)
        printf("Empty Queue");
    else
    {
        i=Q->front;
        while(i!=Q->rear)
        {
            printf("%d ",Q->ptr[i]);
            if(i==Q->capacity-1)
                i=0;
            else
                i++;
        }
        printf("%d ",Q->ptr[i]);
    }
}

int menu()
{
    int choice;
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Print");
    printf("\n4. Exit");
    printf("\n\n Enter your choice :- ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    int data,index,i;
    struct Queue *Q;
    Q=createQueue(5);
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("Enter a data ");
            scanf("%d",&data);
            insertInQueue(Q,data);
            break;
        case 2:
            deleteValue(Q);
            break;
        case 3:
            displayQueue(Q);
            break;
        case 4:
            printf("Thank you press any key to exit");
            getch();
            exit(0);
        default:
            printf("Enter a valid choice");
        }
         getch();
         system("cls");
    }

}
