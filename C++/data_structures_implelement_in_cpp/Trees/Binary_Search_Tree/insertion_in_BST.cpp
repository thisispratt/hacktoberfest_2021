#include <iostream>
using namespace std;
struct tree
{
    int value;
    tree *left, *right;
    tree(int x)
    {
        value = x;
        left = right = NULL;
    }
};

tree *insertInBST(tree *head, int data)
{
    if (head == NULL)
    {
        return new tree(data);
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

void traverse_tree(tree *head)
{
    if (head != NULL)
    {
        traverse_tree(head->left);
        cout << head->value << " ";
        traverse_tree(head->right);
    }
}

int main()
{
    tree *root = NULL;
    root = insertInBST(root, 30);
    insertInBST(root, 20);
    insertInBST(root, 40);
    insertInBST(root, 10);
    insertInBST(root, 25);
    insertInBST(root, 35);
    insertInBST(root, 50);

    cout << "The Tree has following elements (InOrder Traversal) : \n";
    traverse_tree(root);
}