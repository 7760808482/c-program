#include<stdio.h>
int main()
{
    float unit,amt,sc=0;
    char name[50];
    printf("Enter the customer name:");
    scanf("%s",name);
    printf("Enter the number of units:");
    scanf("%f",&unit);
    if(unit<=200)
    amt=unit*0.80;
    else
    if(unit<=300)
    amt=unit*0.90;
    else 
    {
        amt=unit*1;
        amt=amt+100;
    }
    if(amt>=400)
    {
        sc=amt*0.15;
        amt=amt-sc;
    }
   
    printf("Name:%s",name);
    printf("Ammount:%f",amt);
}