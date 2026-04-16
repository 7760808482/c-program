#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coef;
    int exp;
    struct poly *link;
};

struct poly *head = NULL;


struct poly* create(int c, int e)
{
    struct poly *new;
    new = (struct poly*)malloc(sizeof(struct poly));
    new->coef = c;
    new->exp = e;
    new->link = NULL;
    return new;
}


void insfromend(struct poly *new_node)
{
    struct poly *i;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    i = head;
    while (i->link != NULL)
    {
        i = i->link;
    }
    i->link = new_node;
}


void display()
{
    struct poly *i = head;

    if (head == NULL)
    {
        printf("0");
        return;
    }

    while (i != NULL)
    {
        printf("%dx^%d", i->coef, i->exp);
        if (i->link != NULL)
            printf(" + ");
        i = i->link;
    }
}
int main()
{
    struct poly *p;

    p = create(2, 3);
    insfromend(p);

    p = create(1, 2);
    insfromend(p);

    p = create(3, 0);
    insfromend(p);

    printf("Polynomial Expression: ");
    display();

    return 0;
}
