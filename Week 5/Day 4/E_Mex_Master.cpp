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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int b[n - 1];

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i] + a[i + 1];
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}