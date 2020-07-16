#include <bits/stdc++.h>
using namespace std;
#include "1.h"

void printLevelOrderSpecific(node *root)
{
    if (!root)
    {
        return root;
    }

    cout << root->data << " ";
    if (root->left == NULL)
    {
        return;
    }

    stack<node *> s;

    s.push(root->right);
    s.push(root->left);

    while (!s.empty())
    {
        node *cur1 = s.top();
        s.pop();
        node *cur2 = s.top();
        s.pop();
        cout << cur1->left << " " << cur2->right << " " << cur1->right << " " << cur2->left << " ";
    }
}

int main()
{
    node *root = takeInput();
    printLevelOrderSpecific(root);
    cout << endl;
}