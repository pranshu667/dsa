#include <bits/stdc++.h>
using namespace std;
#include "1.h"

void printReverseLevelOrder(node *root)
{
    if (!root)
    {
        return;
    }

    queue<node *> q;
    stack<node *> s;
    q.push(root);
    node *cur;

    while(!q.empty()) {
        cur = q.front();
        q.pop();
        if (cur->right)
        {
            q.push(cur->right);
        }
        if(cur->left) {
            q.push(cur->left);
        }
        s.push(cur);
    }

    while(!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
}

int main()
{
    node *root = takeInput();
    printReverseLevelOrder(root);
}