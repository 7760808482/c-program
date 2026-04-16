#include<stdio.h>
#include<stdlib.h>
struct node {
    int usn;
    char name[20];
    char prog[20];
    int sem;
    int phone; 
    struct node *link;
};

struct node *new;
struct node *head = NULL;
int count=0;


void create_node() {
    new = (struct node*)malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the USN: ");
    scanf("%d", &new->usn);

    printf("Enter the name: ");
    scanf("%s", new->name); 

    printf("Enter the program: ");
    scanf("%s", new->prog);

    printf("Enter the sem: ");
    scanf("%d", &new->sem);

    printf("Enter the phone number: ");
    scanf("%d", &new->phone);

    new->link = NULL;
}

void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("Linked List is empty.\n");
        return;
    }
    printf("\n--- Student Details ---\n");
    while (temp != NULL) {
        printf("USN: %d\nNAME: %s\nPROGRAM: %s\nSEM: %d\nPHONE NUMBER: %d\n\n",
               temp->usn, temp->name, temp->prog, temp->sem, temp->phone);
        temp = temp->link;
    }
    printf("Total number of students: %d\n", count);
}

void Insfromfront() {
    create_node();
    if (head == NULL) {
        head = new;
    } else {
        new->link = head;
        head = new;
    }
    count++;
    printf("Student inserted at the front.\n");
}

void Insfromend() {
    create_node();
    if (head == NULL) {
        head = new;
    } else {
        struct node *temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new;
    }
    count++;
    printf("Student inserted at the end.\n");
}

void delfromfront() {
    if (head == NULL) {
        printf("Linked List is empty. Cannot delete.\n");
        return;
    }
    struct node *temp = head;
    head = head->link;
    printf("Deleted student details from front:\n");
    printf("USN: %d\nNAME: %s\n", temp->usn, temp->name);
    free(temp);
    count--;
}

void delfromend() {
    if (head == NULL) {
        printf("Linked list is empty. Cannot delete.\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;

    if (temp->link == NULL) {
        head = NULL;
    } else {
      
        while (temp->link != NULL) {
            prev = temp;
            temp = temp->link;
        }
        prev->link = NULL; 
    }
    printf("Deleted student details from end:\n");
    printf("USN: %d\nNAME: %s\n", temp->usn, temp->name);
    free(temp);
    count--;
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert from front (Push for Stack)\n");
        printf("2. Insert from end (Enqueue for Queue)\n");
        printf("3. Delete from front (Pop for Stack / Dequeue for Queue)\n");
        printf("4. Delete from end\n");
        printf("5. Display all students\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Insfromfront();
                break;
            case 2:
                Insfromend();
                break;
            case 3:
                delfromfront();
                break;
            case 4:
                delfromend();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0; 
}