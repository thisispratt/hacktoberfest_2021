#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int value;
    struct tree *left, *right;
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

void traverse_tree(struct tree *head)
{
    if (head != NULL)
    {
        traverse_tree(head->left);
        printf(" %d", head->value);
        traverse_tree(head->right);
    }
}

int main()
{
    struct tree *root = NULL;
    root = insertInBST(root, 30);
    insertInBST(root, 20);
    insertInBST(root, 40);
    insertInBST(root, 10);
    insertInBST(root, 25);
    insertInBST(root, 35);
    insertInBST(root, 50);

    printf("The Tree has following elements (InOrder Traversal) : \n");
    traverse_tree(root);
}