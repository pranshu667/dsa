#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *left;
    node *right;
    node *next;
    int data;

    node(int data)
    {

        this->data = data;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

node *takeInput()
{
    node *root = NULL;
    node *temp = NULL;
    int x;
    queue<node *> q;
    cin >> x;
    if (x == -1)
    {
        return root;
    }
    root = new node(x);
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cin >> x;
        if (x != -1)
        {
            temp->left = new node(x);
            q.push(temp->left);
        }
        cin >> x;
        if (x != -1)
        {
            temp->right = new node(x);
            q.push(temp->right);
        }
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
        if(temp->next) {
            cout << temp->next->data << " ";
        }
    }
}

void storeInorder(node *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }

    storeInorder(root->left, v);
    v.push_back(root->data);
    storeInorder(root->right, v);
}

//Populates a next pointer of a node with its inorder successor in O(1) space
//and O(n) time.

void populateInorderSuccessor(vector<int> v, node *root, int *index)
{
    if (!root)
    {
        return;
    }

    populateInorderSuccessor(v, root->left, index);
    ++*index;
    root->next = new node(v[*index]);
    populateInorderSuccessor(v, root->right, index);
}

void populateInorderSuccessor2(node *root, node **prev)
{
    if (!root)
    {
        return;
    }

    populateInorderSuccessor2(root->right, prev);
    root->next = *prev;
    *prev = root;
    populateInorderSuccessor2(root->left, prev);
    return;
}

void print(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    node *root = takeInput();
    //vector<int> v;
    //storeInorder(root, v);
    //v.push_back(-1);
    //int index = 0;
    //populateInorderSuccessor(v, root, &index);
    node *p = NULL;
    populateInorderSuccessor2(root, &p);
    //print(v);

    printLevelOrder(root);
    cout << endl;
}