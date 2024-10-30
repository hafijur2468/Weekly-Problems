#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_black_index = -1;
        int last_black_index = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (first_black_index == -1)
                {
                    first_black_index = i;
                }
                last_black_index = i;
            }
        }

        int length = last_black_index - first_black_index + 1;
        cout << length << endl;
    }
    return 0;
}
