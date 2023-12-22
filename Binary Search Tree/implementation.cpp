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

node *insertBST(node *&root, int data)
{

    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertBST(root->right, data);
    }
    else
    {
        root->left = insertBST(root->left, data);
    }

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

void takeInput(node *&root)
{

    int data;

    cin >> data;

    while (data != -1)
    {
        insertBST(root, data);
        cin >> data;
    }
}

bool searchBSt(node *root, int x)
{

    if (root == NULL)
        return false;

    if (root->data == x)
    {
        return true;
    }

    if (root->data > x)
    {
        searchBSt(root->left, x);
    }
    else
    {
        searchBSt(root->right, x);
    }

  
}

int main()
{

    node *root = NULL;
    cout << "Enter Data" << endl;

    takeInput(root);

    // cout << "Printing the BST" << endl;
    // LevelOrderTraversal(root);

cout<<"NOW searching"<<endl;
    if(searchBSt(root, 9)){
        cout<<"FOUND IT"<<endl;
    }else{
        cout<<"NOT FOUND"<<endl;
    }
}