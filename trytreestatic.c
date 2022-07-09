#include<stdio.h>
#include<stdlib.h>

//char c[]={'\0','d','a','f','e','b','r','t','g','q','\0','\0','v','\0','j','l'};
char c[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};
int complete_node = 15;


int main()
{
    printf("Preorder:");
    inorder(1);
return 0;
}
int inorder(int i)
{
    if(i>0 && c[i]!='\0')
    {
        inorder(getLeft(i));
        printf("%c",c[i]);
        inorder(getRight(i));
    }
}
 int getLeft(int i)
 {
    if( c[i]!='\0' && ((2*i)+1)<=complete_node)
    
        return 2*i;
    
return -1;
 }
 int getRight(int i)
 {
    if(c[i]!='\0' && ((2*i)+1)<=complete_node)
    
        return 2*i+1;
    
return -1;
 }



