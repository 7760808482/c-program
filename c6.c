#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cal{
    char*name;
    int date;
    char*activity;
};
struct cal*p;
void create()
{
    p=(struct cal*)malloc(sizeof(struct cal)*7);
    if(p==NULL)
    {
        printf("memory not allocated");
        return;
    }
}
void read()
{
    char temp[100];                                
    int i;
    for(i=0;i<7;i++)
    {
        printf("Enter the date of day:%d\n",i+1);
        printf("Enter the name of day:\n");
        scanf("%s",temp);
        p[i].name=(char*)malloc(strlen(temp)+1);
        strcpy(p[i].name,temp);
        printf("Enter the date:");
        scanf("%d", &p[i].date);
        printf("Enter the activity:\n");
        scanf("%s",temp);
        p[i].activity=(char*)malloc(strlen(temp)+1);
        strcpy(p[i].activity,temp);
    }
}
void dispaly()
{
    int i;
    printf("The calendar details are:\n");
    for(i=0;i<7;i++)
    {
        printf("%s\t%d\t%s\n",p[i].name,p[i].date,p[i].activity);
    }
}
int main()
{
    create();
    read();
    dispaly();
}