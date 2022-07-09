#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>
struct node *create(struct node*,int);
int leafnode(struct node*);



int p;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};


int main()
{        int item,k,l;
        char d;
        struct node *root;
        root=NULL;

        printf("Enter Data \n");

    for(int i=1;i<=5;i++)
    {
        scanf("%d",&item);
        root=create(root,item);

    }
 p=leafnode(root);
printf("Leaf Nodes are %d",p);
return 0;
}
int leafnode(struct node *root)
{
 if(root==NULL)
    {
        //printf("Doen not exist \n");
    }
else
{
if(root->left==NULL && root->right==NULL)

 return (1);

return leafnode(root->left)+leafnode(root->right);
}
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
        //printf("%d is Inserted at Left of %d\n",item,root->data);
        root->left=create(root->left,item);
    }
        else if(item > root->data)
    {
         //printf("%d is Inserted at Right of %d\n",item,root->data);
        root->right=create(root->right,item);
    }
    else
    {
        //printf("Duplicate data found");
    }
     return (root);

    }
}