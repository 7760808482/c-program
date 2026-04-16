#include <stdio.h>

int main()
{
    int i, j, a[10][10], b[10][10], c[10][10],m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

     printf("Resultant matrix after modulus operation:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] %b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
