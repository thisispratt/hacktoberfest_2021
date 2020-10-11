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

struct tree *getSuccessor(struct tree *temp)
{
    temp = temp->right;
    while (temp != NULL && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

struct tree *deleteInBST(struct tree *head, int data)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->value > data)
    {
        head->left = deleteInBST(head->left, data);
    }
    else if (head->value < data)
    {
        head->right = deleteInBST(head->right, data);
    }
    else
    {
        if (head->left == NULL)
        {
            struct tree *temp = head->right;
            free(head);
            return temp;
        }
        else if (head->right == NULL)
        {
            struct tree *temp = head->left;
            free(head);
            return temp;
        }
        else
        {
            struct tree *succ = getSuccessor(head);
            head->value = succ->value;
            head->right = deleteInBST(head->right, succ->value);
        }
        return head;
    }
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

    printf("Tree before Deletion (InOrder Traversal) : \n");
    traverse_tree(root);
    deleteInBST(root, 10);
    printf("\nTree After Deletion (InOrder Traversal) : \n");
    traverse_tree(root);
}