#include<iostream>
using namespace std;
struct tree 
{ 
    int value;
    tree *left;
    tree *right;
    tree(int k)
    {
        value=k;
        left=right=NULL;
    }
};

void traverse_preorder(tree *head)
{
   if(head!=NULL)
   {
       cout<<head->value<<" ";
       traverse_preorder(head->left);
       traverse_preorder(head->right);
   }
}

int main()
{
  tree *root=new tree(10);
  root->left=new tree(20);
  root->right = new tree(30);
  root->right->right = new tree(50);
  root->right->left = new tree(40);
  cout<<"Our tree is : \n";
  traverse_preorder(root);
  return 0;
}