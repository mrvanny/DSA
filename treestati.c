#include<stdio.h>
#include<stdlib.h>

//char tree[]={'\0','a','b','c','d','e','f','\0','g'};
char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int main()
{
    inorder(1);
    return 0;
}

int left(int index)
{
    if(tree[index]!='\0' && (2*index)<=15)
    return 2*index;
    return -1;
}
int right(int index)
{
    if( tree[index]!='\0' && (2*index+1)<=15)
    return (2*index )+1;
    return -1;
}
void inorder(index)
{

    if(index>0 && tree[index]!='\0')
    {
    inorder(left(index));
    printf("%c",tree[index]);
    inorder(right(index));
    }
    
}