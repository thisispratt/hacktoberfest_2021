#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int value;
    struct tree *left;
    struct tree *right;
};

struct tree *makeNode(int data)
{
    struct tree *node = (struct tree *)malloc(sizeof(struct tree));

    node->value = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int heightOfTree(struct tree *head)
{

    if (head == NULL)
    {
        return 0;
    }
    else
    {
        int leftMax = heightOfTree(head->left);
        int rightMax = heightOfTree(head->right);
        int max = (leftMax > rightMax) ? leftMax : rightMax;
        return max + 1;
    }
}

int main()
{
    struct tree *root = makeNode(10);
    root->left = makeNode(20);
    root->right = makeNode(30);
    root->right->left = makeNode(40);
    root->right->right = makeNode(50);
    int res = heightOfTree(root);
    printf("The Height of the tree is %d", res);
    return 0;
}