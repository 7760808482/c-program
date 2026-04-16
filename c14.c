#include<stdio.h>
void hanoi(int n,char s,char temp,char d )
{
    if(n==1)
    {
        printf("Move %d from %c to %c\n",n,s,d);
        return;
    }
    printf("Move disk from %c to %c",s,d);
    hanoi(n-1,s,d,temp);
    printf("Move %d from %c to %c ",n,s,d);
    hanoi(n-1,temp,s,d);

}
int main()
{
    int n;
    printf("Enter the numner of disk:");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}