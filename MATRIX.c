#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100][100],n;
    printf("How many Vertices You want ?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
          {  printf("Is there is edge between %d and %d \n",i,j);
                scanf("%d",&a[i][j]);
          }
    }

    for(int i=0;i<n;i++)
    {
    count(a,n,i);
    }
    return 0;
}
void count(int a[100][100],int n,int i)
{
    int  j, indegree=0, outdegree=0;
    
        for (j=0;j<n;j++)
        {
            if(a[i][j]==1)
            
               outdegree++;
            
            if(a[j][i]==1)
            
               indegree++;
            
        }
    printf("Indegree of %d node is %d \n",i,indegree++);            
    printf("Outdegree of %d node is %d \n",i,outdegree++);

}