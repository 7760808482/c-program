#include<stdio.h>
#include<stdlib.h>
struct poly{
    int coef;
    int exp;
    struct poly*link;
};
struct poly*p1=NULL;
struct poly*p2=NULL;
struct poly*res=NULL;
struct poly*create(int c,int e)
{
    struct poly*new;
    new=(struct poly*)malloc(sizeof(struct poly));
    new->coef=c;
    new->exp=e;
    new->link=NULL;
    return new;
}
void insatend(struct poly**head,int c,int e)
{
    struct poly*new,*i;
    new=create(c,e);
    if(*head==NULL)
        *head=new;
    else
    {
        i=*head;
        while(i->link!=NULL)
        {
            i=i->link;
        }    
        i->link=new;
    }

}
void add()
{
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->exp==p2->exp)
        {
            insatend(&res,p1->coef+p2->coef,p1->exp);
            p1=p1->link;
            p2=p2->link;
        }
        else if(p1->exp > p2->exp)
        {
            insatend(&res,p1->coef,p1->exp);
            p1=p1->link;
        }
        else{
            insatend(&res,p2->coef,p2->exp);
            p2=p2->link;

        }
    }
    while(p1!=NULL)
    {
        insatend(&res,p1->coef,p1->exp);
        p1=p1->link;

    }
    while(p2!=NULL)
    {
        insatend(&res,p2->coef,p2->exp);
        p2=p2->link;
    }
}
void display(struct poly*head)
{
    if(head==NULL)
    {
        printf("0");
        return;
    }
    while(head->link!=NULL)
    {
        printf("%dx^%d+",head->coef,head->exp);
        head=head->link;
    }
    printf("%dx^%d",head->coef,head->exp);

}
int main()                            
{
    insatend(&p1,3,4);
    insatend(&p1,4,2);
    insatend(&p1,3,0);
    insatend(&p2,7,2);
    insatend(&p2,4,1);
    insatend(&p2,5,0);
    add();
    display(p1);
    display(p2);
    printf("Addition:\n");
    display(res);
}
