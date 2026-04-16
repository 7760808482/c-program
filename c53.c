#include <stdio.h>
int main() {
    int n, i;
    float num, sum = 0.0, mean;
    printf("Enter the numbers y: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num; 
    }
    mean = sum / n;
    printf("\nMean (Average) = %.2f\n", mean);
    return 0;
}
