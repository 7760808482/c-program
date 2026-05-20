#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the guessing number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int random_number=rand()%101; // Generates a random number between 0 and 100
        printf("Random Number %d: %d\n",i+1,random_number);

    }
}
