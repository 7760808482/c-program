#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],m,n;
    printf("Enter the number of rows and colums:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix:");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix for addtion:");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The resultant matrix after addition is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
