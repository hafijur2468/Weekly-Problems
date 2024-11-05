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

        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'B')
            {
                s1[i] = 'G';
            }

            if (s2[i] == 'B')
            {
                s2[i] = 'G';
            }
        }

        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
