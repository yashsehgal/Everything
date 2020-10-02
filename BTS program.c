# https://www.facebook.com/permalink.php?story_fbid=180106856999528&id=100050006454252
# subscribed by Aditya Girishkumar

#include<stdio.h>
#include<stdlib.h>
struct node

{
    int item;
    struct node* left;
    struct node* right;
};
struct node* insertNode(struct node **r,int data)
{
    struct node *temp,*ptr;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->item=data;
    temp->left=NULL;
    temp->right=NULL;
    if(*r==NULL)
        *r=temp;
    else
    {
        ptr=*r;
        while(ptr)
        {
            if(ptr->item==data)
            {
                free(temp);
                printf("\nDuplicate value not allowed");
            }
            else if(data<ptr->item)
            {
                if(ptr->left==NULL)
                {
                    ptr->left=temp;
                    break;
                }
                else
                    ptr=ptr->left;
            }
            else
            {
                if(ptr->right==NULL)
                {
                    ptr->right=temp;
                    break;
                }
                else
                    ptr=ptr->right;
            }
        }
    }
}
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ",root->item);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root)
    {
        printf("%d ",root->item);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->item);
    }
}
int menu()
{
    int choice;
    printf("\n1. Add new element in BST");
    printf("\n2. Delete an element from BST");
    printf("\n3. Exit");
    printf("\n\n Enter your choice:- ");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    struct node* root=NULL;
    int data;
    while(1)
    {
        system("cls");
        printf("\nPreorder:- ");
        preorder(root);
        printf("\nInorder:- ");
        inorder(root);
        printf("\nPostorder:- ");
        postorder(root);
        switch(menu())
        {
        case 1:
            printf("\nEnter a number to insert ");
            scanf("%d",&data);
            insertNode(&root,data);
            break;
        case 2:
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid choice");

        }
        getch();
    }
}
