#include <bits/stdc++.h>
#include "1.h"
using namespace std;

void printLevelOrderChangeAfter2Levels(node *root)
{
    if (!root)
    {
        return;
    }

    queue<node *> q;
    stack<node *> s;
    q.push(root);
    int level = 0;
    node *cur;

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            cur = q.front();
            q.pop();
            if ((level % 4) < 2)
            {
                cout << cur->data << " ";
            }
            else
            {
                s.push(cur);
            }
            if (cur->left)
            {
                q.push(cur->left);
            }
            if (cur->right)
            {
                q.push(cur->right);
            }
        }

        if ((level % 4) >= 2)
        {
            while (!s.empty())
            {
                cur = s.top();
                s.pop();
                cout << cur->data << " ";
            }
        }
        level++;
    }
}

int main()
{
    node *root = takeInput();
    printLevelOrderChangeAfter2Levels(root);
}