#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    long long ans = 0;

    multiset<long long> s;
    while (r < n)
    {
        s.insert(a[r]);
        auto mn = *s.begin();
        auto mx = *s.rbegin();

        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *s.begin();
                mx = *s.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                s.erase(s.find(a[l]));
                l++;
            }
            mn = *s.begin();
            mx = *s.rbegin();
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}