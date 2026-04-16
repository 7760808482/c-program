#include<stdio.h>
int main()
{
    int a, b, ch, res;

    printf("Enter your choice:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");

    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Enter two numbers to add:\n");
            scanf("%d %d", &a, &b);
            res = a + b;
            printf("The sum is: %d\n", res);
            break;

        case 2:
            printf("Enter two numbers to subtract:\n");
            scanf("%d %d", &a, &b);
            res = a - b;
            printf("The difference is: %d\n", res);
            break;

        case 3:
            printf("Enter two numbers to multiply:\n");
            scanf("%d %d", &a, &b);
            res = a * b;
            printf("The product is: %d\n", res);
            break;

        case 4:
            printf("Enter two numbers for division:\n");
            scanf("%d %d", &a, &b);
            if(b != 0)
            {
                res = a / b;
                printf("The quotient is: %d\n", res);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
}
