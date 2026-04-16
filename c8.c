#include <stdio.h>
int main()
{
    char str[1000];
    int n, i;
    printf("Enter the string to be repeated:\n");
    scanf("%s", str);
    printf("Enter how many times to repeat:\n");
    scanf("%d", &n);
    printf("The string \"%s\" repeated %d times:\n", str, n);
    for(i = 1; i <= n; i++)
    {
        printf("%d. %s\n", i, str);
    }
}

