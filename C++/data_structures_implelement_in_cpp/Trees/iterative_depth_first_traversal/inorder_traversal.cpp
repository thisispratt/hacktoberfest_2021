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

void traverse_inorder(tree *head)
{
    stack<tree *> store;
    tree *currentValue = head;
    while (currentValue != NULL || store.empty() == false)
    {
        while (currentValue != NULL)
        {
            store.push(currentValue);
            currentValue = currentValue->left;
        }
        currentValue = store.top();
        store.pop();
        cout << currentValue->value << " ";
        currentValue = currentValue->right;
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
    traverse_inorder(root);
    return 0;
}