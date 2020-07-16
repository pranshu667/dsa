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

int search(int *pre, int key, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (pre[i] > key)
        {
            return i;
        }
    }
    return -1;
}

//time complexity of this function is O(n*n) as it traverse  through every node and
//searches for right child in O(n)
node *createBinaryTreeFromPreOrderTraversal(int *pre, int start, int end)
{

    if (start > end)
    {
        return NULL;
    }

    node *root = new node(pre[start]);

    if (start == end)
    {

        return root;
    }

    int index = search(pre, pre[start], start + 1, end);

    if (index != -1)
    {
        root->left = createBinaryTreeFromPreOrderTraversal(pre, start + 1, index - 1);
        root->right = createBinaryTreeFromPreOrderTraversal(pre, index, end);
    }
    else
    {
        root->left = createBinaryTreeFromPreOrderTraversal(pre, start + 1, end);
        root->right = NULL;
    }
    return root;
}

//creates binary tree from preOrderTraversal in O(n)

node *createBinaryTreeFromPreOrderTraversalOptimized(int *pre, int min, int max, int size)
{
    if (size == 0)
    {
        return NULL;
    }

    node *root = NULL;

    int key = pre[0];
    if (key > min && key < max)
    {
        root = new node(key);

        root->left = createBinaryTreeFromPreOrderTraversalOptimized(pre, min, root->data, size - 1);
        root->right = createBinaryTreeFromPreOrderTraversalOptimized(pre, root->data, max, size - 1);
    }
    return root;
}

void printLevelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        cout << temp->data << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int *pre = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }

    node *root = createBinaryTreeFromPreOrderTraversal(pre, 0, n - 1);
    printLevelOrder(root);
}