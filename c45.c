#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

/* Create a new node */
struct node *create(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

/* Insert into BST */
void insertBST(int val)
{
    struct node *newnode = create(val);
    struct node *current = root;
    struct node *parent = NULL;

    /* If tree is empty */
    if (root == NULL) {
        root = newnode;
        return;
    }

    while (current != NULL) {
        parent = current;
        if (val < current->data)
            current = current->left;
        else
            current = current->right;
    }

    if (val < parent->data)
        parent->left = newnode;
    else
        parent->right = newnode;
}

/* Inorder Traversal */
void inorder(struct node *temp)
{
    if (temp != NULL) {
        inorder(temp->left);
        printf("%d ", temp->data);
        inorder(temp->right);
    }
}

/* Preorder Traversal */
void preorder(struct node *temp)
{
    if (temp != NULL) {
        printf("%d ", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

/* Postorder Traversal */
void postorder(struct node *temp)
{
    if (temp != NULL) {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ", temp->data);
    }
}

int main()
{
    int ch, val;

    while (1) {
        printf("\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            insertBST(val);
            break;

        case 2:
            inorder(root);
            break;

        case 3:
            preorder(root);
            break;

        case 4:
            postorder(root);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}
