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

*/