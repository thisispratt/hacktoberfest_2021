#include <iostream>
#include <stack>
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

void traverse_preorder(tree *head)
{
    stack<tree *> store;
    tree *currentValue = head;
    store.push(head);
    while (store.empty() == false)
    {
        tree *currentValue = store.top();
        cout << currentValue->value << " ";
        store.pop();
        if (currentValue->right != NULL)
        {
            store.push(currentValue->right);
        }
        if (currentValue->left != NULL)
        {
            store.push(currentValue->left);
        }
    }
}

int main()
{
    tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->right->right = new tree(50);
    root->right->left = new tree(40);
    cout << "Our tree is : \n";
    traverse_preorder(root);
    return 0;
}