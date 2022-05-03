#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;
    Tree(int val)
    {
        this->val = val;
    }
};

void inorder(Tree *root)
{
    if (!root)
        return;

    cout << root->val << endl;
    inorder(root->left);
    inorder(root->right);
};

void preorder(Tree *root)
{
    if (!root)
        return;
    preorder(root->left);
    cout << root->val << endl;
    preorder(root->right);
}

void postorder(Tree *root)
{
    if (!root)
        return;
}

void postOrder(Tree *root)
{
    if (!root)
        return;
    postOrder(root->right);
    cout << root->val << endl;
    postOrder(root->left);
}

void iterative_preorder(Tree *root)
{
    if (!root)
        return;

    while (root)
    {
        while (root->left)
        {
            root = root->left;
        }
    }
}

int main()
{
    Tree *root = new Tree(10);
    cout << root->val << endl;
    root->left = new Tree(5);
    root->right = new Tree(7);
    root->left->left = new Tree(10);
    root->right->left = new Tree(25);
    cout << "This is inorder" << endl;
    inorder(root);
    cout << "This is preorder" << endl;
    preorder(root);
    cout << "This is postorder" << endl;
    postOrder(root);
    return 0;
}
