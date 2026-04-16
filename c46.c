#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Increase array size to n+2 */
    arr = (int *)realloc(arr, (n + 2) * sizeof(int));

    printf("Enter 2 more elements:\n");
    for(i = n; i < n + 2; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Final array elements:\n");
    for(i = 0; i < n + 2; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
