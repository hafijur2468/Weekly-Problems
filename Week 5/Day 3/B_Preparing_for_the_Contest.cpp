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

        int a[n + 1];

        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }

        sort(a + 1, a + n + 1, greater<int>());

        int r = n;
        int l = n - k;

        for (int i = 1; i < l; i++)
        {
            cout << a[i] << " ";
        }
        sort(a + l, a + r+1);
        for (int i = l; i <= r; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}