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

tree *getSuccessor(tree *temp)
{
    temp = temp->right;
    while (temp != NULL && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

tree *deleteInBST(tree *head, int data)
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
            tree *temp = head->right;
            delete head;
            return temp;
        }
        else if (head->right == NULL)
        {
            tree *temp = head->left;
            delete head;
            return temp;
        }
        else
        {
            tree *succ = getSuccessor(head);
            head->value = succ->value;
            head->right = deleteInBST(head->right, succ->value);
        }
        return head;
    }
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

    cout << "Tree Before Deletion (InOrder Traversal) : \n";
    traverse_tree(root);
    deleteInBST(root, 10);
    cout << "\nTree After Deletion (InOrder Traversal) : \n";
    traverse_tree(root);
}