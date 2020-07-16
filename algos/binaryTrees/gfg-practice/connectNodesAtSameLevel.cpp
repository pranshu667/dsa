#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *nextRight;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
        nextRight = NULL;
    }
};

Node *takeInput()
{
    Node *root = NULL;
    Node *temp = NULL;
    int x;
    queue<Node *> q;
    cin >> x;
    if (x == -1)
    {
        return root;
    }
    root = new Node(x);
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cin >> x;
        if (x != -1)
        {
            temp->left = new Node(x);
            q.push(temp->left);
        }
        cin >> x;
        if (x != -1)
        {
            temp->right = new Node(x);
            q.push(temp->right);
        }
    }
    return root;
}

void connectNodes(Node *root)
{
    if (!root)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    Node *cur;

    while (!q.empty())
    {
        cur = q.front();
        q.pop();
        if (cur)
        {
            cur->nextRight = q.front();

            if (cur->left)
            {
                q.push(cur->left);
            }
            if (cur->right)
            {
                q.push(cur->right);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

int main()
{
    Node *root = takeInput();
    connectNodes(root);
    cout << root->left->nextRight->data << endl;
}