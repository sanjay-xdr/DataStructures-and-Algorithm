#include <bits/stdc++.h>
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

    cout << "Enter the Data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the data for insertion on the left side " << root->data << endl;

    root->left = buildTree(root->left);

    cout << "Enter the data for insertion on the right side " << root->data << endl;

    root->right = buildTree(root->right);

    return root;
}

void LevelOrderTraversal(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void PreORder(node *root)
{

    if (root == NULL)
        return;

    cout << root->data << " ";
    PreORder(root->left);
    PreORder(root->right);
}

void PostOrder(node *root)
{

    if (root == NULL)
        return;

    PostOrder(root->left);

    PostOrder(root->right);
    cout << root->data << " ";
}

void InOrder(node *root)
{

    if (root == NULL)
        return;

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

int main()
{

    node *root = NULL;
    root = buildTree(root);
    cout << "Printing the level Order traversal" << endl;
    PostOrder(root);
}