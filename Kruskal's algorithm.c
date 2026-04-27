#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct edge{
    int u,v,w;
};
int compare(const void*a,const void*b)
{
    return ((struct edge*)a)->w-((struct edge*)b)->w;

}
int find(int parent[],int i)
{
    while(parent[i]!=i)
        i=parent[i];
    return i;
}
void unionsort(int parent[],int rootU,int rootV)
{
    parent[rootU]=rootV;
}
int main()
{
    int V,E,i;
    struct edge edges[MAX];
    int parent[MAX];
    printf("Enter the number of vertices:");
    scanf("%d",&V);
    printf("Enter the number of edges:");
    scanf("%d",&E);
    printf("Enter the edges (u, v, Weights):");
    for(i=0;i<E;i++)
    {
        scanf("%d %d %d",&edges[i].u,&edges[i].v,&edges[i].w);
    }
    qsort(edges,E,sizeof(struct edge),compare);
    for(i=0;i<V;i++)
        parent[i]=i;
    int count=0;
    int cost=0;
    printf("\nEdges in the Minimum Spanning Tree(MST):\n");
    for(i=0;i<E&&count<V-1;i++)
    {
        int u=edges[i].u;
        int v=edges[i].v;
        int setU=find(parent,u);
        int setV=find(parent,v);
        if(setU!=setV)
        {
            printf("%d--%d==%d\n",u,v,edges[i].w);
            cost+=edges[i].w;
            unionsort(parent,setU,setV);
            count++;
        }
    }
    if(count!=V-1)
        printf("Graph is not connected");
    else
        printf("Minimum cost=%d",cost);
    return 0;
}