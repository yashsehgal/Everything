#https://www.facebook.com/permalink.php?story_fbid=180106856999528&id=100050006454252
#subscribe by Aditya Girishkumar

#include<stdlib.h>
struct Array
{
    int capacity;
    int lastIndex;
    int *ptr;
};
struct Array* createArray(int cap)
{
        struct Array *arr;
        arr=(struct Array*)malloc(sizeof(struct Array));
        arr->capacity=cap;
        arr->lastIndex=-1;
        arr->ptr=(int*)malloc(sizeof(int)*cap);
        return arr;
}
void setValue(struct Array *arr,int index,int data)
{
    int i;
    if(index<0 || index > arr->lastIndex+1)
        printf("Invalid Index");
    else if(arr->capacity-1==arr->lastIndex)
        printf("Overflow");
    else{
        for(i=arr->lastIndex;i>=index;i--)
            arr->ptr[i+1]=arr->ptr[i];
        arr->ptr[index]=data;
        arr->lastIndex+=1;
    }
}
void editValue(struct Array *arr,int index,int data)
{
    if(index<0||index>arr->lastIndex)
        printf("Invalid Index");
    else
        arr->ptr[index]=data;
}
void append(struct Array *arr,int data)
{
    if(arr->capacity-1==arr->lastIndex)
        printf("Overflow");
    else{
        arr->lastIndex+=1;
        arr->ptr[arr->lastIndex]=data;
    }
}
void deleteValue(struct Array *arr,int index)
{
    int i;
    if(arr->lastIndex==-1)
        printf("underflow");
    else if(index<0 || index> arr->lastIndex)
        printf("Invalid Index");
    else{
        for(i=index;i<arr->lastIndex;i++)
            arr->ptr[i]=arr->ptr[i+1];
        arr->lastIndex-=1;
    }
}
int count(struct Array *arr)
{
    return arr->lastIndex+1;
}
int get(struct Array *arr,int index)
{
    if(index<0 || index > arr->lastIndex)
        printf("Invalid Index");
    else
        return arr->ptr[index];
}
int menu()
{
    int choice;
    printf("\n1. Insert Value");
    printf("\n2. Append Vlaue");
    printf("\n3. print Array value");
    printf("\n4. Delet Value");
    printf("\n5. Count vlaue");
    printf("\n6. Edit value");
    printf("\n7. Exit");
    printf("\n\n Enter your choice:  ");
    scanf("%d",&choice);
    return choice;
}
main()
{
    int index,data,i;
    struct Array *arr;
    arr=createArray(10);
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("Enter index and data to insert");
            scanf("%d%d",&index,&data);
            setValue(arr,index,data);
            break;
        case 2:
            printf("Enter data to append");
            scanf("%d",&data);
            append(arr,data);
            break;
        case 3:
            printf("\n ");
            for(i=0;i<count(arr);i++)
                printf("%d ",get(arr,i));
            break;
        case 4:
            printf("Enter index to delet value");
            scanf("%d",&index);
            deleteValue(arr,index);
            break;
        case 5:
            printf("Total Values = %d",count(arr));
            break;
        case 6:
            printf("Enter index and new data to edit");
            scanf("%d%d",&index,&data);
            editValue(arr,index,data);
            break;
        case 7:
            printf("Thank you , press any key to exit...");
            getch();
            exit(0);
        default:
            printf("Invalid Choice");
        }
        getch();
        system("cls");
    }
}
