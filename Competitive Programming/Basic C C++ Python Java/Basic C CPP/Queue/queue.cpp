#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> q)
{
    // queue<int> q1 = q; // don't need to restore in new queue
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q({2, 3, 5});
    showQueue(q);
    q.push(40);
    showQueue(q);
    cout << "Queue size is: " << q.size();
    return 0;
}