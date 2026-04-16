#include<stdio.h>
#include<stdlib.h>
struct node
{
    int usn;
    char name[20];
    char prog[20];
    int sem;
    int phone;
    struct node *link;
};
struct node *new;
struct node *head = NULL;
int count = 0;
void create(int n)
{
    int i;
    for(i=0;i<n;i++)
    new=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data of %d students:",i );
    printf("Enter the Usn:");
    scanf("%d",&new->usn);
    printf("Enter the Name:");
    scanf("%s",new->name);
    printf("Enter the Program:");
    scanf("%s",new->prog);
    printf("Enter the Sem:");
    scanf("%d",&new->sem);
    printf("Enter the Phone number:");
    scanf("%d",&new->phone);
    new->link=NULL; 
    if(head==NULL)
    head=new;
    else{
        new->link=head;
        head=new;
    }
}
void create(int n)
{
    int i;
    printf("Enter the number of student store in n:");
    scanf("%d",&n);
    create(n);
}
void display()
{
    struct node *i;
    i=head;
    while(i!=NULL)
    {
        printf("Details of the student:\n");
        printf("USN:%d\nName:%s\nProgram:%s\nSem:%d\nPhone number:%d\n",i->usn,i->name,i->prog,i->sem,i->phone);
        i=i->link;
        printf("Number of student in the list:%d\n",count);
    }
}
void Insfromfront()
{
    create(1);
    if(head==NULL)
    head=new;
    else
    {
        new->link=head;
        head=new;
        count++;
    }
}
void Insfromend()
{
    create(1);
    struct node*i;
    i=head;
    if(i->link==NULL)
    {
        i=i->link;

    }
    i->link=new;
    count++;

}
void delfromfront()
{
    struct node*temp;
    if(head==NULL)
    {
        printf("List list is empty\n");
        return;
    }
    temp=head;
    head=head->link;
    printf("Deleted student details from front:\n");
    printf("USN:%d\nName:%s\nProgram:%s\nSem:%d\nPhone number:%d\n",temp->usn,temp->name,temp->prog,temp->sem,temp->phone);
    free(temp);
    count--;
}
void delfromend()
{
    struct node*i,*temp;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    i=head;
    while(i->link!=NULL)
    {
        
        i=i->link;
    }
    temp=i->link;
    i->link=NULL;
    printf("Student details removerd from end");
    printf("USN:%d\nName:s%s\nProgram:%s\nSem:%d\nPhone number:%d\n",temp->usn,temp->name,temp->prog,temp->sem,temp->phone);
    free(temp);
}
int main()
{
    int ch,n,i,ch1;
    while(1)
    {
        printf("1'Inserting N number of student from front\n 2.Dispaly \n 3.Stack opertion\n 4.reverse\n 5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the number of student:");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                create(1);
                Insfromfront();
            }
            break;
            case 2:
            display();
            break;
            case 3:
            printf("Impliementing staack using linked list\n");
            printf("Enter your choice:\n 1.push\n2.pop");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:
                Insfromfront();
                break;
                case 2:
                delfromfront();
                break;
                default:
                printf("Inaild choice");
            }
            break;
            case 4:
            printf("Impliementing reverse stack using linked list\n");
            printf("Enter your choice:\n 1.push\n 2.pop");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:
                Insfromend();
                break;
                case 2:
                delfromend();
                break;
                default:
                printf("Invalid choice");
            }
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid choice");
        }

    }
}

