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

int heightOfTree(tree *head)
{

    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return max(heightOfTree(head->left), heightOfTree(head->right)) + 1;
    }
}

int main()
{
    tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->right->right = new tree(50);
    root->right->left = new tree(40);
    int max = heightOfTree(root);
    cout << "The Height of the tree is : " << max;
    return 0;
}