#include <stdio.h>
#define MAX 100
int main()
{
    int n, i, j, k;
    int path[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &path[i][j]);
        }
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                path[i][j] =
                    path[i][j] ||
                    (path[i][k] && path[k][j]);
            }
        }
    }
    printf("\nTransitive Closure Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", path[i][j]);
        }
        printf("\n");
    }
    return 0;
}

