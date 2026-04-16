#include<stdio.h>
#include<stdlib.h>

struct node {
    int usn;
    char name[20];
    char prog[20];
    int sem;
    double phone;
    struct node *link;
};

struct node *head = NULL;
int count = 0;

struct node* create_node()
{
    struct node *new = (struct node*) malloc(sizeof(struct node));

    printf("Enter USN: ");
    scanf("%d", &new->usn);

    printf("Enter Name: ");
    scanf("%s", new->name);

    printf("Enter Program: ");
    scanf("%s", new->prog);

    printf("Enter Sem: ");
    scanf("%d", &new->sem);

    printf("Enter Phone: ");
    scanf("%lf", &new->phone);

    new->link = NULL;
    return new;
}

void display()
{
    if(head == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }

    struct node *temp = head;

    printf("\n--- STUDENT DETAILS ---\n");

    while(temp != NULL)
    {
        printf("USN: %d\nNAME: %s\nPROGRAM: %s\nSEM: %d\nPHONE: %lf\n\n",
               temp->usn, temp->name, temp->prog, temp->sem, temp->phone);
        temp = temp->link;
    }

    printf("Total Students: %d\n", count);
}

void Insfromfront()
{
    struct node *new = create_node();
    new->link = head;
    head = new;
    count++;
}

void Insfromend()
{
    struct node *new = create_node();

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        struct node *temp = head;
        while(temp->link != NULL)
            temp = temp->link;

        temp->link = new;
    }
    count++;
}

void delfromfront()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    head = head->link;

    printf("Deleted Student:\nUSN: %d\n", temp->usn);
    free(temp);
    count--;
}

void delfromend()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(head->link == NULL)   // only one node
    {
        printf("Deleted Student: %d\n", head->usn);
        free(head);
        head = NULL;
        count--;
        return;
    }

    struct node *temp = head, *prev = NULL;

    while(temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }

    printf("Deleted Student: %d\n", temp->usn);
    prev->link = NULL;
    free(temp);
    count--;
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert from Front\n");
        printf("2. Insert from End\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from End\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        scanf("%d", &ch);

        switch(ch)
        {
            case 1: Insfromfront(); break;
            case 2: Insfromend(); break;
            case 3: delfromfront(); break;
            case 4: delfromend(); break;
            case 5: display(); break;
            case 6: exit(0);

            default: printf("Invalid Choice\n");
        }
    }
}
