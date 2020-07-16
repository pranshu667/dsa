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

void storeInorder(node *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }

    storeInorder(root->left, v);
    v.push_back(root->data);
    storeInorder(root->right, v);
}

void replaceNodes(node *root, int *index, vector<int> v)
{
    if (!root)
    {
        return;
    }

    replaceNodes(root->left, index, v);
    root->data = v[*index - 1] + v[*index + 1];
    *index++;
    replaceNodes(root->right, index, v);
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

void printVector(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    node *root = takeInput();
    vector<int> v;
    v.push_back(0);
    storeInorder(root, v);
    v.push_back(0);
    printVector(v);
    int i = 1;
    replaceNodes(root, &i, v);
    printLevelOrder(root);
}