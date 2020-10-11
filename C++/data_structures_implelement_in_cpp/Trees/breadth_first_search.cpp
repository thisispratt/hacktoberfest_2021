#include <iostream>
#include <queue>
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

void bfsTraversal(tree *head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        queue<tree *> q;
        q.push(head);
        while (q.empty() == false)
        {
            tree *presentNode = q.front();
            q.pop();
            cout << presentNode->value << " ";
            if (presentNode->left != NULL)
            {
                q.push(presentNode->left);
            }
            if (presentNode->right != NULL)
            {
                q.push(presentNode->right);
            }
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
    cout << "Level Order Traversal is  : \n";
    bfsTraversal(root);
    return 0;
}