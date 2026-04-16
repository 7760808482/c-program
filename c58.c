#include <stdio.h>

int main()
{
    float Revenue_Growth, Profit_Growth, EPS;
    float PE_Ratio, Industry_Average;
    float Debt_Equity, ROE;
    int Score = 0;

    printf("Enter Revenue Growth (%%): ");
    scanf("%f", &Revenue_Growth);

    printf("Enter Profit Growth (%%): ");
    scanf("%f", &Profit_Growth);

    printf("Enter EPS: ");
    scanf("%f", &EPS);

    printf("Enter PE Ratio: ");
    scanf("%f", &PE_Ratio);

    printf("Enter Industry Average PE Ratio: ");
    scanf("%f", &Industry_Average);

    printf("Enter Debt-Equity Ratio: ");
    scanf("%f", &Debt_Equity);

    printf("Enter ROE (%%): ");
    scanf("%f", &ROE);

    // Condition 1: Revenue Growth
    if (Revenue_Growth > 10)
        Score += 2;

    // Condition 2: Profit Growth
    if (Profit_Growth > 10)
        Score += 2;

    // Condition 3: PE Ratio comparison
    if (PE_Ratio < Industry_Average)
        Score += 2;

    // Condition 4: Debt-Equity Ratio
    if (Debt_Equity < 1)
        Score += 2;

    // Condition 5: ROE
    if (ROE > 15)
        Score += 2;

    // Final Decision
    if (Score >= 8)
        printf("\nResult: Strong Buy");
    else if (Score >= 5 && Score <= 7)
        printf("\nResult: Hold");
    else
        printf("\nResult: Avoid");

    return 0;
}#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {12, 11, 13, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);

    insertionSort(data, n);
    printArray(data, n);

    return 0;
}