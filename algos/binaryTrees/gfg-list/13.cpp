#include <bits/stdc++.h>
#include "1.h"
using namespace std;
unordered_map<node *, int> um;

int height(node *root)
{
    if (!root)
    {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}
//time complexity O(n^2) and space complexity O(1).

void printSpiral(node *root, int level, bool itr)
{
    if (!root)
    {
        return;
    }
    if (level == 1)
    {
        cout << root->data << " ";
    }
    else if (level > 1)
    {
        if (itr)
        {
            printSpiral(root->left, level - 1, itr);
            printSpiral(root->right, level - 1, itr);
        }
        else
        {
            printSpiral(root->right, level - 1, itr);
            printSpiral(root->left, level - 1, itr);
        }
    }
}

void printSpiral2(node *root)
{
    if (!root)
    {
        return;
    }
    stack<node *> s1;
    stack<node *> s2;
    s1.push(root);
    node *cur;
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            cur = s1.top();
            s1.pop();
            cout << cur->data << " ";
            if (cur->left)
            {
                s2.push(cur->left);
            }
            if (cur->right)
            {
                s2.push(cur->right);
            }
        }

        while (!s2.empty())
        {
            cur = s2.top();
            cout << cur->data << " ";
            s2.pop();
            if (cur->right)
            {
                s1.push(cur->right);
            }
            if (cur->left)
            {
                s1.push(cur->left);
            }
        }
    }
}

int main()
{
    node *root = takeInput();
    // int h = height(root);
    // bool itr = true;
    // for (int i = 1; i <= h; i++)
    // {
    //     printSpiral(root, i, itr);
    //     itr = !itr;
    // }
    printSpiral2(root);
}