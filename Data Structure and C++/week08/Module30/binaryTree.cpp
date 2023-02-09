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

// function declaration
void printTree(tNode *root, int level);
void spacePrint(int level);
void inOrderTraversal(tNode *root, string &str);
void preOrderTraversal(tNode *root, string &str);
void postOrderTraversal(tNode *root, string &str);
void levelOrderTraversal(tNode *root, string &str);
int maxAtLevelOfTree(tNode *root, string &str); 
int findPositionInOrder(int in[], int start, int end, int findKey);
tNode *BuildTreeFromPreAndInOrderTraversalString(int pre[], int in[], int start, int end);
void printLeftNonLeaves(tNode *root);
void printLeaves(tNode *root);
void printRightNonLeaves(tNode *root);
void boundaryTraversal(tNode *root);

void inOrderTraversal(tNode *root, string &str) // left root right
{
    if (root == NULL)
        return;
    inOrderTraversal(root->left_node, str);
    str += to_string(root->data);
    inOrderTraversal(root->right_node, str);
}

void preOrderTraversal(tNode *root, string &str) // root left right
{
    if (root == NULL)
        return;
    str += to_string(root->data);
    preOrderTraversal(root->left_node, str);
    preOrderTraversal(root->right_node, str);
}

void postOrderTraversal(tNode *root, string &str) // left right root
{
    if (root == NULL)
        return;
    postOrderTraversal(root->left_node, str);
    postOrderTraversal(root->right_node, str);
    str += to_string(root->data);
}

void levelOrderTraversal(tNode *root, string &str)
{
    if (root == NULL)
    {
        return;
    }
    queue<tNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        tNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            str += to_string(chkNode->data);
            if (chkNode->left_node != NULL)
            {
                q.push(chkNode->left_node);
            }
            if (chkNode->right_node != NULL)
            {
                q.push(chkNode->right_node);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
};

void reverseLevelOrderTraversal(tNode *root, string &str)
{
    if (root == NULL)
    {
        return;
    }
    stack<tNode *> S;
    queue<tNode *> Q;
    Q.push(root);

    while (Q.empty() == false)
    {
        root = Q.front();
        Q.pop();
        S.push(root);

        if (root->right_node)
            Q.push(root->right_node);

        if (root->left_node)
            Q.push(root->left_node);
    }

    while (S.empty() == false)
    {
        root = S.top();
        // cout << root->data << " ";
        str += to_string(root->data);
        S.pop();
    }
};

int maxAtLevelOfTree(tNode *root, int keyLevel)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<tNode *> q;
    q.push(root);
    q.push(NULL);
    // initially level 0 and maximum value -1.
    int level = 0, max = -1;
    while (!q.empty())
    {
        tNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            // find max only key level
            if (level == keyLevel)
            {
                if (max < chkNode->data)
                {
                    max = chkNode->data;
                }
            }
            if (chkNode->left_node != NULL)
            {
                q.push(chkNode->left_node);
            }
            if (chkNode->right_node != NULL)
            {
                q.push(chkNode->right_node);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return max;
};

void averageOfLevels(tNode *root)
{
    // vector<float> res;

    // Traversing level by level
    queue<tNode *> q;
    q.push(root);

    while (!q.empty())
    {

        // Compute sum of nodes and
        // count of nodes in current
        // level.
        int sum = 0, count = 0;
        queue<tNode *> temp;
        while (!q.empty())
        {
            tNode *n = q.front();
            q.pop();
            sum += n->data;
            count++;
            if (n->left_node != NULL)
                temp.push(n->left_node);
            if (n->right_node != NULL)
                temp.push(n->right_node);
        }
        q = temp;
        cout << (sum * 1.0 / count) << " ";
    }
}

// here root is call by value. pointer accept in parameter as pointer.
void printTree(tNode *root, int level)
{
    if (root == NULL) // when tree is empty
    {
        return;
    }
    // case 1 -> left or right child is NULL or node is not a root
    if (root->left_node == NULL && root->right_node == NULL)
    {
        cout << root->data << endl;
        // if root is found that time we will not do any work below(case-2, letf node info, right node info).
        return;
    }
    // case 2 -> left or right child is not NULL or node is a root  
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

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "    ";
    }
}

int findPositionInOrder(int in[], int start, int end, int findKey)
{
    for (int i = start; i < end; i++)
    {
        if (in[i] == findKey)
        {
            return i;
        }
    }
    return -1;
}

tNode *BuildTreeFromPreAndInOrderTraversalString(int pre[], int in[], int start, int end)
{
    static int idx = 0;
    int current = pre[idx];
    idx++;
    tNode *newNode = new tNode(current);
    if (start == end)
    {
        return newNode;
    }
    int pos = findPositionInOrder(in, start, end, current);
    newNode->left_node = BuildTreeFromPreAndInOrderTraversalString(pre, in, start, pos - 1);
    newNode->right_node = BuildTreeFromPreAndInOrderTraversalString(pre, in, pos + 1, end);
    return newNode;
}

void printLeftNonLeaves(tNode *root)
{
    if (root == NULL)
        return;
    if (root->left_node != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->left_node);
    }
    else if (root->right_node != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeaves(root->right_node);
    }
}

void printLeaves(tNode *root)
{
    if (root == NULL)
        return;
    if (root->left_node == NULL && root->right_node == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeaves(root->left_node);
    printLeaves(root->right_node);
}

void printRightNonLeaves(tNode *root)
{
    if (root == NULL)
        return;
    if (root->right_node != NULL)
    {
        cout << root->data << " ";
        printRightNonLeaves(root->right_node);
    }
    else if (root->left_node != NULL)
    {
        cout << root->data << " ";
        printRightNonLeaves(root->left_node);
    }
}

void boundaryTraversal(tNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    // left non leaves
    printLeftNonLeaves(root->left_node);
    // left leaves
    printLeaves(root->left_node);
    // right leaves
    printLeaves(root->right_node);
    // right non leaves
    printRightNonLeaves(root->right_node);
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
        // new node create then assign -1 in value. allNodes[i].data is wrong ans.
        allNodes[i] = new tNode(-1);
    }

    // set binary tree node value, left child, right child in index.
    for (int i = 0; i < totalNode; i++)
    {
        int value, left, right;
        // here value is node data, left is node left index, right is node right index.
        cin >> value >> left >> right;

        // set value in allNodes index 
        allNodes[i]->data = value;

        // we can not assign value over total index.
        if (left > totalNode - 1 || right > totalNode - 1)
        {
            cout << "Invalid Index" << endl;
            break;
        }

        // if user left value is not -1,
        // allNodes er left e allNodes er left index er value bosate hobe
        if (left != -1)
        {
            // cout << allNodes[left] << " ";
            allNodes[i]->left_node = allNodes[left]; // allNodes left value pointer set left_node in allNodes index position
        }
        if (right != -1)
        {
            allNodes[i]->right_node = allNodes[right];
        }
    }

    // print tree
    printTree(allNodes[0], 0); // root is present in first index of allNodes and Root is present initially 0 level.

    string inOrderTraversalString = "";
    string preOrderTraversalString = "";
    string postOrderTraversalString = "";
    string levelOrderTraversalString = "";
    string reverseLevelOrderTraversalString = "";

    inOrderTraversal(allNodes[0], inOrderTraversalString);
    preOrderTraversal(allNodes[0], preOrderTraversalString);
    postOrderTraversal(allNodes[0], postOrderTraversalString);
    levelOrderTraversal(allNodes[0], levelOrderTraversalString);
    reverseLevelOrderTraversal(allNodes[0], reverseLevelOrderTraversalString);
    averageOfLevels(allNodes[0]);

    cout << endl
         << "In order Traversal: " << inOrderTraversalString << endl;
    cout << "Pre Order Traversal: " << preOrderTraversalString << endl;
    cout << "Post Order Traversal: " << postOrderTraversalString << endl;
    cout << "Level Order Traversal: " << levelOrderTraversalString << endl;
    cout << "Reverse Level Order Traversal: " << reverseLevelOrderTraversalString << endl;

    // find maximum at give level.
    cout << endl
         << "Enter lever no where you want to find max: ";
    int level;
    cin >> level;
    int maxAtLevel = maxAtLevelOfTree(allNodes[0], level);
    if (maxAtLevel == -1)
        cout << "You enter over level number." << endl;
    else
        cout << "Maximum value at "<<level<<" level: " << maxAtLevel << endl;

    // Build Tree from pre-order and in-order traversal
    int inputPreTraversalString[totalNode], inputInTraversalString[totalNode];
    string outputOfTreeInPreOrder = "";
    cout << endl
         << "Please, input pre-order and in-order traversal string: ";
    for (int i = 0; i < totalNode; i++)
    {
        cin >> inputPreTraversalString[i];
    }
    for (int i = 0; i < totalNode; i++)
    {
        cin >> inputInTraversalString[i];
    }

    tNode *rootOfNewTree = BuildTreeFromPreAndInOrderTraversalString(inputPreTraversalString, inputInTraversalString, 0, totalNode - 1);
    preOrderTraversal(rootOfNewTree, outputOfTreeInPreOrder);
    cout << "Pre order traversal of new created tree from pre and in order traversal: " << outputOfTreeInPreOrder << endl;

    // Boundary Traversal from a tree.
    cout << "Boundary Traversal of Tree is: ";
    boundaryTraversal(allNodes[0]);
    return 0;
}

/*
Input:
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

Enter level no where you want to find max: 2

input pre and in order traversal sting digit:
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

Output: 
preorder format output: 
Root: 0
Left:
    Root: 1
    Left: 3
    Right: 4
Right:
    Root: 2
    Left:
        Root: 5
        Left: 7
    Right: 6

In order Traversal: 314075826
Pre Order Traversal: 013425786
Post Order Traversal: 341785620
Level Order Traversal: 012345678
Reverse Level Order Traversal: 783456120

Maximum value at 2 level: 6

Pre order traversal of new created tree from pre and in order traversal: 013425786

Boundary Traversal of Tree is: 0 1 3 4 7 8 6 2

*/