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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int white_count = 0;

        int w = 0, b = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                w++;
            }
            else
            {
                b++;
            }
        }

        int currentwhite = w;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
            {
                w++;
            }
            else
            {
                b++;
            }

            if (s[i - k] == 'B')
            {
                b--;
            }
            else
            {
                w--;
            }

            currentwhite = min(currentwhite, w);
        }

        cout << currentwhite << endl;
    }
    return 0;
}