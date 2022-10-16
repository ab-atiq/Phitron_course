#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;

    treeNode(int val)
    {
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void inOrderTraversal(treeNode *root, string &str) // left root right
{
    if (root == NULL)
        return;
    inOrderTraversal(root->leftChild, str);
    str += (to_string(root->data) + " ");
    inOrderTraversal(root->rightChild, str);
}

treeNode *insertionBST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    // value < root-> data
    if (value < root->data)
    {
        root->leftChild = insertionBST(root->leftChild, value);
    }
    // value > root-> data
    else if (value > root->data)
    {
        root->rightChild = insertionBST(root->rightChild, value);
    }

    return root;
}

treeNode *searchBST(treeNode *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        cout << root->data;
    }
    else if (root->data > key)
    {
        cout << root->data << " -> ";
        searchBST(root->leftChild, key);
    }
    else
    {
        cout << root->data << " -> ";
        searchBST(root->rightChild, key);
    }
    return root;
}

int main()
{

    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insertionBST(root, value);
    }

    string BSTstring = "";
    inOrderTraversal(root, BSTstring);
    cout << BSTstring << endl;

    int key;
    cin >> key;
    treeNode *findKey = searchBST(root, key);
    if (findKey == NULL)
    {
        cout << endl
             << "Value does not found in BST." << endl;
    }
    else
    {
        cout << endl
             << "Value exist in BST." << endl;
    }

    return 0;
}

/*
input:
10
11 5 9 43 34 1 2 7 21 79
search key:
7

output in-order traversal:
1 2 5 7 9 11 21 34 43 79
path: 11 -> 5 -> 9 -> 7
Value is exist in BST

*/