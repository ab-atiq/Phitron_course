#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

struct Move
{
    int c1, r1, c2, r2;
    Move(int col1, int row1, int col2, int row2) : c1(col1), r1(row1), c2(col2), r2(row2) {}
};

void moveRooks(int n, vector<int> &p, vector<Move> &moves)
{
    vector<bool> inLIS(n + 1, false);
    vector<int> LIS;

    // Step 1: Find the Longest Increasing Subsequence (LIS)
    for (int i = 1; i <= n; i++)
    {
        auto it = lower_bound(LIS.begin(), LIS.end(), p[i - 1]);
        if (it == LIS.end())
        {
            LIS.push_back(p[i - 1]);
        }
        else
        {
            *it = p[i - 1];
        }
    }

    // Mark positions in the LIS as horizontal rooks
    for (int i : LIS)
        inLIS[i] = true;

    // Step 2: Process vertical rooks (those not in LIS)
    for (int i = 1; i <= n; i++)
    {
        if (!inLIS[p[i - 1]])
        {
            int target_col = p[i - 1];
            int intermediate_row = (i < target_col) ? 2 : 3;

            // Move to intermediate row, horizontally to target, then down to bottom row
            moves.push_back(Move(i, 1, i, intermediate_row));                         // Move up
            moves.push_back(Move(i, intermediate_row, target_col, intermediate_row)); // Move horizontally
            moves.push_back(Move(target_col, intermediate_row, target_col, 1));       // Move down
        }
    }

    // Step 3: Process horizontal rooks (those in LIS)
    for (int i = 1; i <= n; i++)
    {
        if (inLIS[p[i - 1]] && i != p[i - 1])
        {
            moves.push_back(Move(i, 1, p[i - 1], 1));
        }
    }
}

int main()
{
    int T;
    cin >> T;
    for (int case_num = 1; case_num <= T; case_num++)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        // Vector to store moves
        vector<Move> moves;
        moveRooks(n, p, moves);

        // Output the result
        cout << "Case " << case_num << ": " << moves.size() << endl;
        for (const auto &move : moves)
        {
            cout << move.c1 << " " << move.r1 << " " << move.c2 << " " << move.r2 << endl;
        }
    }
    return 0;
}
