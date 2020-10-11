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

void traverse_postorder(tree *head)
{
	if (head == NULL)
		return;
	stack<tree *> store1, store2;
	store1.push(head);
	tree *node;
	while (!store1.empty())
	{
		node = store1.top();
		store1.pop();
		store2.push(node);
		if (node->left)
			store1.push(node->left);
		if (node->right)
			store1.push(node->right);
	}
	while (!store2.empty())
	{
		node = store2.top();
		store2.pop();
		cout << node->value << " ";
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
	traverse_postorder(root);
	return 0;
}
