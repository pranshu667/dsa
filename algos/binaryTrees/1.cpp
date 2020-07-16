#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *left;
    node *right;
    int data;

    node(int data)
    {

        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *createBinaryTree(vector<int> v)
{
    int n = v.size();
}
//take input in such a way that -1 terminates the branch

node *takeInput()
{
    node *root = NULL;
    node *temp = NULL;
    int x;
    queue<node *> q;
    cin >> x;
    if (x == -1)
    {
        return root;
    }
    root = new node(x);
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cin >> x;
        if (x != -1)
        {
            temp->left = new node(x);
            q.push(temp->left);
        }
        cin >> x;
        if (x != -1)
        {
            temp->right = new node(x);
            q.push(temp->right);
        }
    }
    return root;
}

void recInorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    recInorder(root->left);
    cout << root->data << " ";
    recInorder(root->right);
}

void RecPreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    RecPreorder(root->left);
    RecPreorder(root->right);
}

void nonRecPreorder(node *root)
{
    stack<node *> s;
    node *cur = root;
    if (root != NULL)
    {
        s.push(root);
    }
    while (!s.empty())
    {
        cur = s.top();
        cout << cur->data << " ";
        s.pop();

        if (cur->right)
        {
            s.push(cur->right);
        }
        if (cur->left)
        {
            s.push(cur->left);
        }
    }
}

void nonRecursiveInorder(node *root)
{
    stack<node *> s;
    node *cur = root;
}

void printLevelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        cout << temp->data << " ";
    }
}

void nonRecPostorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<node *> s;
    //cout << s.top();

    while (root != NULL || s.empty() == false)
    {

        while (root)
        {
            if (root->right)
            {
                s.push(root->right);
            }
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        if (root->right && !s.empty() && root->right == s.top())
        {
            s.pop();
            s.push(root);
            root = root->right;
        }
        else
        {
            cout << root->data << " ";
            root = NULL;
        }
    }
}
void recPostorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    recPostorder(root->left);
    recPostorder(root->right);
    cout << root->data << " ";
    return;
}

node *takeInputLevelOrder()
{
    node *root = NULL;
    node *temp = NULL;
    queue<node *> q;
    bool left = true;
    bool right = true;
    int x;
    while (cin >> x)
    {
        if (root == NULL)
        {
            root = new node(x);
            q.push(root);
        }
        else
        {
            temp = q.front();
            q.pop();
            if (!temp->left && left)
            {
                temp->left = new node(x);
                q.push(temp->left);
                left = false;
                right = true;
            }
            else if (!temp->right && right)
            {
                temp->right = new node(x);
                q.push(temp->right);
                right = false;
                left = true;
            }
        }
    }
    return root;
}

int main()
{

    //create a binary tree with array elements taken in level order
    node *root = takeInput();
    //printLevelOrder(root);
    //nonRecursive(root);
    //nonRecPostorder(root);
    RecPreorder(root);

    cout << endl;
    //cout << root->data << " " << root->left->data << " " << root->right->data << " ";
}
