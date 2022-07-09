#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node *create(struct node*,int);

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int main()
{        int item;
        char d;
        struct node *root;
        root=NULL;

    //do

    for(int i=1;i<=5;i++)
    {
        printf("Enter Data \n");
        scanf("%d",&item);
        root=create(root,item);

    //printf("Would you like to insert more Data? \n");
    //scanf(" %c",&d);

    }//while(d=='y'||d=='Y');
}
struct node* create(struct node *root,int item)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->left=root->right=NULL;
        root->data=item;
        return root;
    }
    else
    {
       if(item < root->data)
    { 
        printf("%d is Inserted at Left of %d\n",item,root->data);
        root->left=create(root->left,item);
    }
        else if(item > root->data)
    {
         printf("%d is Inserted at Right of %d\n",item,root->data);
        root->right=create(root->right,item);
    }
    else
    {
        printf("Duplicate data found");
    }
     return (root);

    }
}