#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    int player_point = x * 1 + y * 0.5;
    int opponent_point = y * 0.5 + z * 1;

    int match_remain = 4 - (x + y + z);

    if (match_remain == 0)
    {
        if (player_point > opponent_point)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (match_remain > 0)
    {
        player_point += match_remain;
        if (player_point > opponent_point)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}