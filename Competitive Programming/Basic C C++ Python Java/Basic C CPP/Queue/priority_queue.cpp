// Priority queues are built on the top of the max heap and use an array or vector as an internal structure.
#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q({36, 26, 13, 67, 25, 63});

    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq1; // change it to min heap by passing another parameter while creating a priority queue.
    cout << "Initial queue: ";
    while (!q.empty())
    {
        int n = q.front();
        q.pop();
        cout << n << " ";
        pq.push(n);
        pq1.push(n);
    }
    cout << endl;
    cout << "Priority Queue : ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << "Priority Queue Reverse value: ";
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    return 0;
}