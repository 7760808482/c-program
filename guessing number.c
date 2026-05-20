#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess,random_number;
    srand(time(0)); // Seed the random number generator with the current time   
    random_number=rand()%101; // Generate a random number between 0 and 100
    printf("Guess the number between (1-100): ");
    scanf("%d",&guess);
    while(1)
    {
        if(guess==random_number)
        {
            printf("Congratulations you guessed the correct number");
            break;
        }
        else if(guess<random_number)
        {
            printf("Too low, try again: ");
            scanf("%d",&guess);
        }
        else if(guess>random_number)
        {
            printf("Too high, try again: ");
            scanf("%d",&guess);
        }
    }
    return 0;
}
