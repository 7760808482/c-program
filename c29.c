#include <stdio.h>
#include <stdlib.h>

struct node {
    int row;
    int col;
    int val;
    struct node *link;
};

struct node *head = NULL;

/* Create a new node */
struct node* create(int r, int c, int v)
{
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    new->row = r;
    new->col = c;
    new->val = v;
    new->link = NULL;
    return new;
}

/* Insert node at end */
void insatend(int r, int c, int v)
{
    struct node *new, *temp;
    new = create(r, c, v);

    if (head == NULL) 
    {
        head = new;
        return;
    }

    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new;
}

/* Display sparse matrix */
void display()
{
    struct node *temp;

    if (head == NULL) {
        printf("Sparse matrix is empty\n");
        return;
    }

    printf("Elements in the sparse matrix are:\n");
    temp = head;
    while (temp != NULL) {
        printf("[%d %d] = %d\n", temp->row, temp->col, temp->val);
        temp = temp->link;
    }
}

int main()
{
    int a[10][10], i, j, r, c;

    printf("Enter the order of the matrix (rows columns): ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0) {
                insatend(i, j, a[i][j]);
            }
        }
    }

    display();
    return 0;
}
