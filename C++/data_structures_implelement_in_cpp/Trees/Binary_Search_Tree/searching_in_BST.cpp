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

bool searchInBST(tree *head, int data)
{
    if (head == NULL)
    {
        return false;
    }
    else if (head->value == data)
    {
        return true;
    }
    else if (head->value > data)
    {
        return searchInBST(head->left, data);
    }
    else
    {
        return searchInBST(head->right, data);
    }
}

int main()
{
    int elem;
    tree *root = NULL;
    root = insertInBST(root, 30);
    insertInBST(root, 20);
    insertInBST(root, 40);
    insertInBST(root, 10);
    insertInBST(root, 25);
    insertInBST(root, 35);
    insertInBST(root, 50);

    cout << "Enter the Element you want to search : \n";
    cin >> elem;

    bool result = searchInBST(root, elem);

    if (result == true)
    {
        cout << "The element " << elem << " is present in Tree";
    }
    else
    {
        cout << "The element " << elem << " is not present in Tree";
    }

    return 0;
}