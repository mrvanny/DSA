// Stack Using Array [Dynamic] BY Mr.Vanny
// Feel free to ask if you have any doubts

#include<stdlib.h>
#include <stdio.h>
struct ArrayStack
{
    int top;
    unsigned capacity;
    int *Array;
    
};
struct ArrayStack * createStack(int);
int isFull(struct ArrayStack * );
int isEmpty(struct ArrayStack * );
int push(struct ArrayStack * , int );
int pop(struct ArrayStack * );
int display(struct ArrayStack *);


void main()
{
    int ch,val,cap,x=0,k;
    struct ArrayStack * stack;
    printf("Enter capcity of stack");
    scanf("%d",&cap);
    stack=createStack(cap);
    while(1)
    {

    
        printf("1: Push \n ");
        printf("2: Pop \n ");
        printf("3: exit \n");
        printf("4: Display \n");
        printf("Enter your choice \t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enter value \t");
                scanf("%d",&val);
                x=push(stack,val);
                if(x==-1)
                {
                    printf("\nStack is full\n");
                }
              
                break;
            }
            case 2:
            {
                val=pop(stack);
                if(val==-1)
                {
                    printf(" \nstack is empty\n");
                }
                else
                {
                    printf("\n popped element is %d \n",val);
                }
                break;
            }
            case 3:
            {
                exit(0);
            }
            case 4:
            {
                k=display(stack);
            }++++++++++++++++++++++++        }
    }
}
struct ArrayStack* createStack(int cap)
{
    struct ArrayStack *stack;
    stack=malloc(sizeof(struct ArrayStack));
    stack->top=-1;
    stack->capacity=cap;
    stack->Array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int isFull(struct ArrayStack *stack)
{
    if((stack->top)==(stack->capacity-1))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int isEmpty(struct ArrayStack * stack)
{
    if(stack->top==-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int push(struct ArrayStack *stack , int val)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->Array[stack->top]=val;
        return 0;
    }
    else
    {
        return(-1);
    }
}
int pop(struct ArrayStack *stack)
{
    int val;
    if(!isEmpty(stack))
    {
        val=stack->Array[stack->top];
        stack->top--;
        return(val);
    }
    else
    {
        return(-1);
    }
}
int display(struct ArrayStack *stack)
{
    if(!isEmpty(stack))
         printf("\n At the top value is: %d \n",stack->Array[stack->top]);
     else
     {
        printf("\n Stack is Empty Bro \n");
     }
    return 0;
}
