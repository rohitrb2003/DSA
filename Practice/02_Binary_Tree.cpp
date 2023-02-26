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

node *bulidTree(node *root)
{
    cout << "Enter the element :" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for Left" << endl;
    root->left = bulidTree(root->left);
    cout << "Enter the data for Right" << endl;
    root->right = bulidTree(root->right);

    return root;
}

int main()
{

    node *root = NULL;

    root = bulidTree(root);

    return 0;
}