#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data :";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in the left" << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right" << endl;
    root->right = buildTree(root->right);
    return root;
}

// Use this as a input : 1 2 -1 -1 5 7 -1 -1 -1 3 -1 6

// Preoreder Tree
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << "  "; // N
    preorder(root->left);       // L
    preorder(root->right);      // R
}

// Inorder Tree
void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);       // L
    cout << root->data << " "; // N
    inorder(root->right);      // R
}

// Postorder Tree
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);     // L
    postorder(root->right);    // R
    cout << root->data << " "; // N
}

int main()
{
    node *root = NULL;
    root = buildTree(root);

    cout << endl
         << "Preorder Traversal is : ";
    preorder(root);
    cout << endl
         << "Inorder Traversal is : ";
    inorder(root);
    cout << endl
         << "Postorder Traversal is : ";
    postorder(root);

    return 0;
}