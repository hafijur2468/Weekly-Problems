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

        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int l = 1, r = n ;

        int minimum = 1, maximum = n;

        while (l <= r)
        {
            if (v[l] == minimum)
            {
                l++;
                minimum++;
            }
            else if (v[l] == maximum)
            {
                l++;
                maximum--;
            }
            else if (v[r] == maximum)
            {
                r--;
                maximum--;
            }
            else if (v[r] == minimum)
            {
                r--;
                minimum++;
            }
            else
            {
                break;
            }
        }
        if (l <= r)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}