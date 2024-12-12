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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long mxodd = -1;

        vector<int> ev;
        for (int i : a)
        {
            if (i % 2 == 0)
            {
                ev.push_back(i);
            }
            else
            {
                if (i > mxodd)
                {
                    mxodd = i;
                }
            }
        }

        sort(ev.begin(), ev.end());

        if (mxodd == -1 || ev.empty())
        {
            cout << 0 << endl;
            continue;
        }

        int ans = ev.size();
        for (int g : ev)
        {
            if (g < mxodd)
            {
                mxodd += g;
            }
            else
            {
                ans += 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}