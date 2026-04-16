#include<stdio.h>
#include<stdlib.h>
struct node{
    int SSN;
    char name[50];
    char dept[50];
    char des[50];
    float SAL;
    int phno;
    struct node*next;
    struct node*prev;
};
struct node *head=NULL;
struct node*create()
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the SNN:");
    scanf("%d",&new->SSN);
    printf("Enter the name:");
    scanf("%s",new->name);
    printf("Enter the department:");
    scanf("%s",new->dept);
    printf("Enter the designation:");
    scanf("%s",new->des);
    printf("Enter the salary:");
    scanf("%f",&new->SAL);
    printf("Enter the phone number:");
    scanf("%d",&new->phno);
    new->next=NULL;
    new->prev=NULL;
    return new;
}
void insfromend()
{
    struct node*new,*i;
    new=create();
    if(head==NULL)
    {
        head=new;
        return;

    }
    i=head;
    while(i->next!=NULL)
    {
        i->next=new;
        new->prev=i;
    }
}
 void insfromfront()
 {
    struct node*new;
    new=create();
    if(head==NULL)
    {
        head=new;
        return;
    }
    new->next=head;
    head->prev=new;
    head=new;
 }
 void delfromfront()
 {
    struct node*temp;
    temp=head;
    if(head==NULL)
    {
        printf("DLL is empty");
        return;
    }
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
 }
 void delfromend()
 {
    struct node*temp1;
    struct node*temp;
    if(head==NULL)
    {
        printf("DLL is empty");
        return;

    }
    if(head->next==NULL)
    {
        free(temp);
        head=NULL;
    }
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=NULL;
    free(temp1);
}
void display()
{
    int count=0;
    struct node*temp;
    temp=head;
    if(head==NULL)
    {
        printf("DLL is empty");
        return;
        while(temp!=NULL)
        {
            printf("Details of the employee");
            printf("SSN:%d\nName:%s\nDepartment:%s\nDesignation:%s\nSalary:%f\nPhone number:%d\n",temp->SSN,temp->name,temp->dept,temp->des,temp->SAL,temp->phno);
            count++;
        }
        
        printf("Total number of employees:%d",count);
    }

}
int main()
{
    int ch,i,n;
    while(1)
    {
        printf("----------------------menu----------------------\n");
        printf("1.Crete your choice for SLL\n2.Insert from front\n3.Insert from end\n4.Delete from front\n5.Delete from end\n6.Display\n7.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the number of employees:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        insfromend();
        break;
        case 2:
        insfromfront();
        break;
        case 3:
        insfromend();
        break;
        case 4:
        delfromfront();
        break;
        case 5:
        delfromend();
        break;
        case 6:
        display();
        break;
        case 7:
        exit(0);
        default:
        printf("Invalid choice");   
       
    }
}
}
