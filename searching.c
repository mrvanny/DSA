#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>
struct node *create(struct node*,int);
//struct node *search(struct node*,int);



struct node
{
    int data;
    struct node* left;
    struct node* right;
};
static bool flag = false;  


int main()
{        int item,k;
        char d;
        struct node *root;
        root=NULL;

        printf("Enter Data \n");

    for(int i=1;i<=5;i++)
    {
        scanf("%d",&item);
        root=create(root,item);

    }
    printf("Enter key value for searching:");
    scanf("%d",&k);
    search(root,k);
    if(flag==true)
    {
        printf("key is present");
        
    }
    else
    {
        printf("Key is not present");
    }
}
void search(struct node *root,int k)
{
    if(root==NULL)
    {
        printf("Tree Does not exist\n");
    }
    else
    {
        if(root->data==k)
        {
        flag =true;
        return ;
        }
        if(flag == false && root->left!=NULL )
        {   
            return search(root->left,k);
        }
        if(flag==false && root->right!=NULL)
        {
            return search(root->right,k);
        }

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