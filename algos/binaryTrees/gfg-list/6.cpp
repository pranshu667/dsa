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

vector<node *> AllBinaryTrees(int *in, int start, int end)
{
    vector<node *> trees;

    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<node *> ltrees = AllBinaryTrees(in, start, i - 1);
        vector<node *> rtrees = AllBinaryTrees(in, i + 1, end);

        for (int j = 0; j < ltrees.size(); j++)
        {
            for (int k = 0; k < rtrees.size(); k++)
            {
                node *root = new node(in[i]);
                root->left = ltrees[j];
                root->right = rtrees[k];
                trees.push_back(root);
            }
        }
    }
    return trees;
}

void nonRecPreorder(node *root)
{
    stack<node *> s;
    node *cur = root;
    if (root != NULL)
    {
        s.push(root);
    }
    while (!s.empty())
    {
        cur = s.top();
        cout << cur->data << " ";
        s.pop();

        if (cur->right)
        {
            s.push(cur->right);
        }
        if (cur->left)
        {
            s.push(cur->left);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *in = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
        }

        vector<node *> trees;
        trees = AllBinaryTrees(in, 0, n - 1);
        for (int i = 0; i < trees.size(); i++)
        {
            nonRecPreorder(trees[i]);
            cout << endl;
        }
    }
}