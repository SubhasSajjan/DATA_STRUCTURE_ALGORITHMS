//DFS (depth first search) this algorithm is for traversal of adjecency matrix of undirected graph
//time complexity is O(v^2),v is number of vertex
//it uses the stack data structure for storing the all adjecent non visited vertex  

#include<stdio.h>
int adj[20][20],visited[20];
int st[20],tos=-1,n;
void push(int v)
{
    st[++tos] = v;
}
int pop()
{
    if(tos == -1)
    {
        return -1;
    }
    return st[tos--];
}
void dfs(int v)
{
    visited[v] = 1;
   printf("%d\t",v);
    for(int i=0;i<n;i++)
    {
        if(adj[v][i]==1 && visited[i]==0)
        {
            push(i);
            visited[i] = 1;
        }

    }
    int g = pop();
    if(g != -1)
    {
        dfs(g);
    }
}
int main()
{
    int  k;
    printf("Enter the size of the Adjecency matrix");
    scanf("%d",&n);
    printf("Enyer the elements to matrix\n");
    for (int i = 0 ; i < n ; i++)
    {
         for(int j = 0 ; j < n ;j++)
           {
               scanf("%d", &adj[i][j]);
           }
    }

    for(int i= 0 ; i < n ; i++ )
        visited[i] = 0;
     printf("Enter the starting vertex");
    scanf("%d",&k);
    dfs(k);
}
