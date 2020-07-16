#include <bits/stdc++.h>
using namespace std;
#include "1.h"

node *reverseTreePath(node *root, int data, int &pos, map<int, int> &m, int level)
{
    if (!root)
    {
        return NULL;
    }

    if (root->data == data)
    {
        m[level] = root->data;
        root->data = m[pos];
        pos++;
        return root;
    }

    m[level] = root->data;
    node *left, *right;
    left = reverseTreePath(root->left, data, pos, m, level + 1);
    if (left == NULL)
    {
        right = reverseTreePath(root->right, data, pos, m, level + 1);
    }

    if (left || right)
    {
        root->data = m[pos];
        pos++;
        return (left != NULL) ? left : right;
    }
    return NULL;
}

int main()
{
    int data;
    cin >> data;

    node *root = takeInput();
    map<int, int> um;
    int nextPos = 0;

    node *cur = reverseTreePath(root, data, nextPos, um, 0);
    printLevelOrder(root);
}
