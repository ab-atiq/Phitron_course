#include <bits/stdc++.h>
using namespace std;

class tNode
{
public:
    int data;
    tNode *left_node;
    tNode *right_node;
    tNode(int value)
    {
        data = value;
        left_node = NULL;
        right_node = NULL;
    }
};

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "    ";
    }
}

void printTree(tNode *root, int level)
{
    if (root == NULL) // when tree is empty
    {
        return;
    }
    // case 1 -> left or right child is not a root
    if (root->left_node == NULL && root->right_node == NULL)
    {
        cout << root->data << endl;
        // if root is found that time we will not do any work below.
        return;
    }
    // case 2 -> left or right child is a root
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root: " << root->data;
    }
    cout << endl;

    // left node info
    if (root->left_node != NULL) // redundant recursive call remove
    {
        spacePrint(level);
        cout << "Left: ";
        // recursive call
        printTree(root->left_node, level + 1);
    }

    // right node info
    if (root->right_node != NULL) // redundant recursive call remove
    {
        spacePrint(level);
        cout << "Right: ";
        // recursive call
        printTree(root->right_node, level + 1);
    }
}

void verticalTraversal(tNode *root, int D, map<int, vector<int>> &M)
{
    if (root == NULL)
    {
        return;
    }
    M[D].push_back(root->data);
    verticalTraversal(root->left_node, D - 1, M);
    verticalTraversal(root->right_node, D + 1, M);
}

int main()
{
    int totalNode;
    cin >> totalNode;

    // total node pointer array
    tNode *allNodes[totalNode];

    // initially all nodes value assign in -1 that represent it is empty.
    for (int i = 0; i < totalNode; i++)
    {
        // new node create then assign -1 in value.
        allNodes[i] = new tNode(-1);
    }

    // set binary tree node value, left child, right child in index.
    for (int i = 0; i < totalNode; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;

        // set value in all node index
        allNodes[i]->data = value;

        // we can not assign value over total index.
        if (left > totalNode - 1 || right > totalNode - 1)
        {
            cout << "Invalid Index" << endl;
            break;
        }

        // allNodes er left e allNodes er left index er value bosate hobe
        if (left != -1)
        {
            allNodes[i]->left_node = allNodes[left];
        }

        // allNodes er right e allNodes er right index er value bosate hobe
        if (right != -1)
        {
            allNodes[i]->right_node = allNodes[right];
        }
    }

    // print tree
    printTree(allNodes[0], 0); // root is present in first index of allNodes and Root is present initially 0 level.


    // vertical traversal using map and vector
    map<int, vector<int>> M;
    verticalTraversal(allNodes[0], 0, M);
    map<int, vector<int>>::iterator it;
    for (it = M.begin(); it != M.end(); it++)
    {
        cout << it->first << ": ";
        for (int j = 0; j < (it->second).size(); j++)
            cout << (it->second)[j] << " ";
        cout << endl;
    }

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
vertical traversal:
-2: 3 
-1: 1 7
0: 0 4 5
1: 2 8
2: 6

*/