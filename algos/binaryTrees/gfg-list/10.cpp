#include <bits/stdc++.h>
#include "1.h"
using namespace std;

void NthNode(node *root, int *i, int n)
{
    if (!root)
    {
        return;
    }

    NthNode(root->left, i, n);
    if (*i == n)
    {
        cout << root->data << " ";
    }
    ++*i;
    NthNode(root->right, i, n);
}

node *NthNode(node *root, int *i, int n)
{
    if (!root)
    {
        return NULL;
    }
    if (i == n)
    {
        return root;
    }
    return NthNode(root->left, i, n);
    return 
}

int main()
{
    int n;
    cin >> n;
    node *root = takeInput();
    int i = 1;
    NthNode(root, &i, n);
    root = NthNode(root, &i, n);
    cout << root->data << " ";
}