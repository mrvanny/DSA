// Program of Queue BY Mr.Vanny 

#include<stdio.h>
#include<stdlib.h>
struct arrayq* createqueue(int);
int enque(struct arrayq *,int);
int dequeue(struct arrayq *);
int isfull(struct arrayq *);
int isEmpty(struct arrayq *);
void deletequeue(struct arrayq *);

struct arrayq
{
    int front,rear;
    unsigned capacity;
    int *array;
};

// Feel free to ask if you have any doubts 

int main()
{
    int ele,c,n,v;
    struct arrayq *p;
    printf("How many Elements You Want Dude ?");
    scanf("%d",&ele);
    p=createqueue(ele);
    while(1)
    { printf("1.Insert \n 2.Delete \n 3.Size Of Queue \n 4.Delete Queue \n");
            scanf("%d",&c);

            switch(c)
            {
                case 1:printf("Enter Number to Insert \n");
                        scanf("%d",&n);
                        enque(p,n);
                        break;
                case 2:v=dequeue(p);
                        if(v!=-1)
                        {
                        printf("Deleted value is : %d \n",v);
                        }
                        break;
                case 3:queuesize(p);
                        break;
                case 4: deletequeue(p);
                        break;
                default:printf("Invalid Choice \n");
            }
   }
}

struct arrayq* createqueue(int cap)
{
    struct arrayq *q;
    q=malloc(sizeof(struct arrayq));
    q->front=q->rear=-1;
    q->capacity=cap;
    q->array=malloc(sizeof(int)*cap);
    return q;
}
int enque(struct arrayq *q,int val)
{
    if(isfull(q))
    {
        printf("Overflow \n");
    }
    else
    {
        q->rear=(q->rear+1)%(q->capacity);
        q->array[q->rear]=val;
        if(q->front==-1)
        {
            q->front=q->rear;
        }
    }
}
int dequeue(struct arrayq *q)
{
    int data=-1;
    data=q->array[q->front];

    if(isEmpty(q))
    {
        printf("Queue is empty \n");
    }
    else
    {
        
        if(q->front == q->rear)
        {
            q->front =q->rear=-1;
        }
        else
        { q->front=(q->front+1) % q->capacity;}
    }
    return data;
}
int queuesize(struct arrayq *q)
{
    if(isfull(q))
    {
        printf("%d \n",q->capacity);
    }
    else if(isEmpty(q))
    {
        printf("0 \n");
    }
    else
   { int v;
        v= ((q->capacity - q->front+q->rear+1) % q->capacity);
    printf("Size is:%d \n",v);
   }
}
int isfull(struct arrayq *q)
{
    if((q->rear+1)%q->capacity==(q->front))
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct arrayq *q)
{
    if(q->front==-1)
    {
        return 1;
    }
    return 0;
}
void deletequeue(struct arrayq *q)
{
    if(q)
    {
        if(q->array)
        {
            free(q->array);
            printf("Queue deleted \n");
        }
        free(q);    
    }
}

