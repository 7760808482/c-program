#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int rev;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rev = arr[n-1];

    for(i = n-1; i >= 0; i--)
    {
        if(rev > arr[i])
        {
            rev = arr[i];
        }
    }

    printf("Largest element = %d", rev);

    return 0;
}
