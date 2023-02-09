#include <bits/stdc++.h>
using namespace std;

class tNode
{
public:
    int value;
    tNode *leftChild;
    tNode *rightChild;
    tNode(int data)
    {
        value = data;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printSpace(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "    ";
    }
}

void printTree(tNode *node, int level)
{
    if (node == NULL)
    {
        return;
    }

    if (node->leftChild == NULL && node->rightChild == NULL)
    {
        cout << node->value << endl;
        return;
    }
    else
    {
        cout << endl;
        printSpace(level);
        cout << "Root: " << node->value;
    }
    cout << endl;

    if (node->leftChild != NULL)
    {
        printSpace(level);
        cout << "Left: ";
        printTree(node->leftChild, level + 1);
    }

    if (node->rightChild != NULL)
    {
        printSpace(level);
        cout << "Right: ";
        printTree(node->rightChild, level + 1);
    }
}

void inorderTraversal(tNode *root, string &str)
{
    if (root == NULL)
        return;
    inorderTraversal(root->leftChild, str);
    str += to_string(root->value);
    inorderTraversal(root->rightChild, str);
}
void preorderTraversal(tNode *root, string &str)
{
    if (root == NULL)
        return;
    str += to_string(root->value);
    preorderTraversal(root->leftChild, str);
    preorderTraversal(root->rightChild, str);
}
void postorderTraversal(tNode *root, string &str)
{
    if (root == NULL)
        return;
    postorderTraversal(root->leftChild, str);
    postorderTraversal(root->rightChild, str);
    str += to_string(root->value);
}

int main()
{
    int totalNode;
    cin >> totalNode;
    tNode *AllNodes[totalNode];
    for (int i = 0; i < totalNode; i++)
    {
        AllNodes[i] = new tNode(-1);
    }
    for (int i = 0; i < totalNode; i++)
    {
        int data, left, right;
        cin >> data >> left >> right;
        AllNodes[i]->value = data;

        if (left > totalNode - 1 || right > totalNode - 1)
        {
            cout << "Invalid index" << endl;
            break;
        }
        if (left != -1)
            AllNodes[i]->leftChild = AllNodes[left];
        if (right != -1)
            AllNodes[i]->rightChild = AllNodes[right];
    }
    // printTree(AllNodes[0], 0);
    string inorderString = "";
    inorderTraversal(AllNodes[0], inorderString);
    cout <<"Inorder traversal is: "<< inorderString << endl;

    string preorderString = "";
    preorderTraversal(AllNodes[0], preorderString);
    cout << "Preorder traversal is: "<<preorderString << endl;

    string postorderString = "";
    postorderTraversal(AllNodes[0], postorderString);
    cout << "Postorder traversal is: "<< postorderString << endl;
    return 0;
}
/*
input:
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
output: 
Inorder traversal is: 314075826
Preorder traversal is: 013425786
Postorder traversal is: 341785620
*/