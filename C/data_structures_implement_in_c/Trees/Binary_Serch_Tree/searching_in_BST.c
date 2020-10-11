#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int value;
    struct tree *left;
    struct tree *right;
};

struct tree *newNode(int data)
{
    struct tree *temp = (struct tree *)malloc(sizeof(struct tree));

    temp->value = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
struct tree *insertInBST(struct tree *head, int data)
{
    if (head == NULL)
    {
        return newNode(data);
    }
    else if (head->value > data)
    {
        head->left = insertInBST(head->left, data);
    }
    else
    {
        head->right = insertInBST(head->right, data);
    }
    return head;
}

int searchInBST(struct tree *head, int data)
{
    if (head == NULL)
    {
        return 0;
    }
    else if (head->value == data)
    {
        return 1;
    }
    else if (head->value > data)
    {
        return searchInBST(head->left, data);
    }
    else
    {
        return searchInBST(head->right, data);
    }
}

int main()
{
    int elem;
    struct tree *root = NULL;
    root = insertInBST(root, 30);
    insertInBST(root, 20);
    insertInBST(root, 40);
    insertInBST(root, 10);
    insertInBST(root, 25);
    insertInBST(root, 35);
    insertInBST(root, 50);

    printf("Enter the Element you want to search : \n");
    scanf("%d", &elem);

    if (searchInBST(root, elem))
    {
        printf("The element %d is present in Tree", elem);
    }
    else
    {
        printf("The element %d is not present in Tree", elem);
    }

    return 0;
}