#include <iostream>
using namespace std;

struct tree
{
    int value;
    tree *left;
    tree *right;
    tree(int k)
    {
        value = k;
        left = right = NULL;
    }
};

int sizeOfTree(tree *head)
{
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return (sizeOfTree(head->left) + 1 + sizeOfTree(head->right));
    }
}

int main()
{
    tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->right->right = new tree(50);
    root->right->left = new tree(40);
    int res = sizeOfTree(root);
    cout << "Size of the Tree is  : " << res;
    return 0;
}