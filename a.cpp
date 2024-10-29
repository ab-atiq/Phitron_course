/*
----------------------
|                    |
| Abul Bashar Atiq   |
|                    |
----------------------
*/
#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int countSetBits(int num)
{
    return bitset<32>(num).count();
}

int main()
{
    int TC;
    cin >> TC;

    while (TC--)
    {
        string numStr;
        cin >> numStr;

        int maxOnes = -1;
        string final_number = "";

        for (int i = 0; i <= 9; ++i)
        {
            string temp = numStr;
            char rep_char = i + '0';

            for (char &ch : temp)
            {
                if (ch == '?')
                {
                    ch = rep_char;
                };
            };

            int cur_num = stoi(temp);

            int ones_count = countSetBits(cur_num);

            if (ones_count > maxOnes || (ones_count == maxOnes && cur_num > stoi(final_number)))
            {
                maxOnes = ones_count;
                final_number = temp;
            }
        }

        cout << final_number << endl;
    }

    return 0;
}
