# https://www.facebook.com/permalink.php?story_fbid=180106856999528&id=100050006454252
#subscribe by Aditya Girishkumar

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Array
{
    int capacity;
    int lastIndex;
    int *ptr;
};
struct Array* createArray(int cap)
{
    struct Array *arr;
    arr=(struct Array *)malloc(sizeof(struct Array));
    arr->capacity=cap;
    arr->lastIndex=-1;
    arr->ptr=(int *)malloc(sizeof(int)*cap);
    return arr;
}
void PUSH(struct Array *arr,int data)
{
    int i=0,j=arr->lastIndex;
    if(arr->capacity-1==arr->lastIndex)
        printf("Overflow");
    else
    {
        for(i=arr->lastIndex;i>=j;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[0]=data;
        arr->lastIndex+=1;
    }
}
void POP(struct Array *arr)
{
    int i=0;
    if(arr->lastIndex==-1)
        printf("Array is Empty");
    else
    {
        arr->ptr[i]=arr->ptr[i+1];
        arr->lastIndex-=1;
    }
}
void display(struct Array *arr)
{
    int i;
    for(i=0;i<=arr->lastIndex;i++)
        printf("%d ",arr->ptr[i]);
}
int menu()
{
    int choice;
    printf("\n1. Insert Value(PUSH)");
    printf("\n2. Delete Value(POP)");
    printf("\n3. Display Stack");
    printf("\n4. Exit");
    printf("\n\n Enter your choice :- ");
    scanf("%d",&choice);
    return choice;
}
main()
{
    int data;
    struct Array *arr;
    arr=createArray(5);
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("Enter a data ");
            scanf("%d",&data);
            PUSH(arr,data);
            break;
        case 2:
            POP(arr);
            break;
        case 3:
            display(arr);
            break;
        case 4:
            printf("Thank you for using, press any key to exit");
            getch();
            exit(0);
            break;
        default:
            printf("Enter a valid choice");
        }
        getch();
    }
}
