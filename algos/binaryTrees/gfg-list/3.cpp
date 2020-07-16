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

void morrisTraversal(node *root)
{
    if (!root)
    {
        return;
    }

    node *cur = root;

    while (cur)
    {
        if (!cur->left)
        {
            cout << cur->data << " ";
            cur = cur->right;
        }
        else
        {
            node *pre = cur->left;
            while (pre->right != NULL && pre->right != cur)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = cur;
                cur = cur->left;
            }
            else
            {
                cout << cur->data << " ";
                pre->right = NULL;
                cur = cur->right;
            }
        }
    }
}

int main()
{
    node *root = takeInput();

    morrisTraversal(root);
}