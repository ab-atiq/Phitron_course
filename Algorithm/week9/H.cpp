#include <bits/stdc++.h>
using namespace std;

bool canAttendAllMeetings(vector<pair<int, int>> &meetings)
{
    sort(meetings.begin(), meetings.end());
    for (int i = 1; i < meetings.size(); i++)
    {
        if (meetings[i].first < meetings[i - 1].second)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<pair<int, int>> meetings;
    int r;
    cout << "Enter number of row: ";
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        int u, v;
        cout << "Enter interverl: ";
        cin >> u >> v;
        meetings.push_back({u, v});
    }
    bool ans = canAttendAllMeetings(meetings);
    string str;
    ans ? str = "true" : str = "false";
    cout << str << endl;

    return 0;
}
/*
Enter number of row: 3
Enter interverl: 0 30
Enter interverl: 5 10
Enter interverl: 15 20
false
Enter number of row: 2
Enter interverl: 7 10
Enter interverl: 2 4
true
*/