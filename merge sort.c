#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Merge function */
void merge(int a[], int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = start;

    int B[end + 1];  // temporary array

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
            B[k++] = a[i++];
        else
            B[k++] = a[j++];
    }

    while (i <= mid)
        B[k++] = a[i++];

    while (j <= end)
        B[k++] = a[j++];

    /* Copy back to original array */
    for (i = start; i <= end; i++)
        a[i] = B[i];
}

/* Merge Sort function */
void mergeSort(int a[], int start, int end){
    if (start < end)
    {
        int mid = (start + end) / 2;

        mergeSort(a, start, mid);      // left half
        mergeSort(a, mid + 1, end);    // right half

        merge(a, start, mid, end);     // merge both
    }
}

int main(){
    int *a;
    int n, i;
    clock_t t1, t2;
    double time_taken;

    printf("Enter number of elements (n > 5000): ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Random number generation */
    srand(time(0));
    for (i = 0; i < n; i++)
        a[i] = rand() % 10000;

    /* Time measurement */
    t1 = clock();

    mergeSort(a, 0, n - 1);
    t2 = clock();

    time_taken = (double)(t2 - t1) / CLOCKS_PER_SEC;

    printf("Time taken to sort %d elements = %f seconds\n", n, time_taken);
    free(a);
    return 0;
}