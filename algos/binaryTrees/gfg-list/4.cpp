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

void takeArrayInput(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void printArray(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

//searches index of root element in inorder traversal array
int search(int *in, int root, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (root == in[i])
        {
            return i;
        }
    }
    return -1;
}

void printPostOrder(int *in, int *pre, int n)
{
    int root = search(in, pre[0], n);

    if (root == -1)
    {
        return;
    }

    if (root != 0)
    {
        printPostOrder(in, pre + 1, root);
    }
    if (root != n - 1)
    {
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
    }
    cout << pre[0] << " ";
}

int main()
{
    int n;
    cin >> n;

    int *pre = new int[n];
    int *in = new int[n];

    takeArrayInput(in, n);
    takeArrayInput(pre, n);

    printPostOrder(in, pre, n);
    cout << endl;
}