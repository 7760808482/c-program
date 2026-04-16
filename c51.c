#include <stdio.h>
int main()
{
    int line, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &line);
    for(i = 1; i <= line; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }  
}
