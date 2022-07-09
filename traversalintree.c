#include<stdio.h>
#include<stdlib.h>

    struct node *root;

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    int n,i,k;
    struct node *root;
    root=NULL;

    printf("How Many Nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        root=create(root);
    }

 display(root);

    return 0;

}
int create()
{
    int k,i;
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node*));
     printf("Enter Value:");

    scanf("%d",&k);
    new->data=k;
    new->left=NULL;
    new->right=NULL;
    return new;


}
void display(struct node* root)
{
    if(root!=NULL)
    {
        display(root->left);
        printf("%d ->",root->data);
        display(root->right);
    }
}