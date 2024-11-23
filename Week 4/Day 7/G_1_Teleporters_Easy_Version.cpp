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
        int n, c;
        cin >> n >> c;

        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i] + i;
        }

        sort(a + 1, a + n + 1);
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (c >= a[i])
            {
                c = c - a[i];
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}