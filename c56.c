#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
    int lthread;
    int rthread;
};

struct node* newNode(char data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->lthread = 1;
    temp->rthread = 1;
    return temp;
}

struct node* inorderSuccessor(struct node* ptr)
{
    if (ptr->rthread == 1)
        return ptr->right;

    ptr = ptr->right;
    while (ptr->lthread == 0)
        ptr = ptr->left;

    return ptr;
}

void inorder(struct node* root)
{
    struct node* ptr = root;

    while (ptr->lthread == 0)
        ptr = ptr->left;

    while (ptr != NULL)
    {
        printf("%c ", ptr->data);
        ptr = inorderSuccessor(ptr);
    }
}

int main()
{
    struct node *A = newNode('A');
    struct node *B = newNode('B');
    struct node *C = newNode('C');

    A->left = B;
    A->right = C;
    A->lthread = 0;
    A->rthread = 0;

    B->right = A;   // thread
    C->left = A;    // thread

    printf("Inorder Traversal:\n");
    inorder(A);

    return 0;
}
