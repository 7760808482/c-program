#include<stdio.h>
int ele,a[10],i,j,n,pos=-1;
void insert()
{
    for(i=n;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
}
int main()
{
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Entert the element from thr array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",&a[i]);
    printf("Entert the elemnte to be inserted:\n");
    scanf("%d",&ele);
    printf("Enter the position to insert the element:\n");
    scanf("%d",&pos);
    insert();
    printf("The array after insertion is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);    
    }
}