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

        int a[n];

        int sz = n * (n - 1) / 2;
        int b[sz];

        for (int i = 0; i < sz; i++)
        {
            cin >> b[i];
        }

        sort(b, b + sz);

        vector<int> ans;
        int l = 0;
        int r = n - 1;

        while (r > 0)
        {
            ans.push_back(b[l]);
            l += r;
            r--;
        }

        ans.push_back(1e9);

        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
