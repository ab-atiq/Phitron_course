#include <bits/stdc++.h>
using namespace std;
int minConferenceRooms(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    priority_queue<int, vector<int>, greater<int>> end_times;

    for (const auto &interval : intervals)
    {
        if (!end_times.empty() && interval[0] >= end_times.top())
        {
            end_times.pop();
        }

        end_times.push(interval[1]);
    }

    return end_times.size();
}
int main()
{
    vector<vector<int>> intervals1 = {{0, 30}, {5, 10}, {15, 20}};
    vector<vector<int>> intervals2 = {{7, 10}, {2, 4}};

    cout << minConferenceRooms(intervals1) << endl; // Output: 2
    cout << minConferenceRooms(intervals2) << endl; // Output: 1

    return 0;
}
