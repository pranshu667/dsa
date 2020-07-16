#include <bits/stdc++.h>
#include "1.h"
using namespace std;

void printLevelOrderLineByLine(node *root)
{
    if (!root)
    {
        return;
    }
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int nodeCount = q.size();
        while (nodeCount--)
        {
            node *cur = q.front();
            cout << cur->data << " ";
            q.pop();
            if (cur->left)
            {
                q.push(cur->left);
            }
            if (cur->right)
            {
                q.push(cur->right);
            }
        }
        cout << endl;
    }
}



int main()
{
    node *root = takeInput();
    printLevelOrderLineByLine(root);
}