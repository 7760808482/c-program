#include <stdio.h>
#define MAX 100
#define INF 9999

int main()
{
    int n, i, j;
    int cost[MAX][MAX];
    int visited[MAX] = {0};
    int min, a, b;
    int total_cost = 0, edges = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (i != j && cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    visited[0] = 1;

    printf("\nEdges in MST:\n");

    while (edges < n - 1)
    {
        min = INF;

        for (i = 0; i < n; i++)
        {
            if (visited[i])
            {
                for (j = 0; j < n; j++)
                {
                    if (!visited[j] && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if (min == INF)
        {
            printf("Graph is not connected\n");
            return 1;
        }

        printf("%d -- %d == %d\n", a, b, min);

        total_cost += min;
        visited[b] = 1;
        edges++;
    }

    printf("Minimum Cost = %d\n", total_cost);

    return 0;
}
