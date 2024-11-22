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
        int a, b, n;
        cin >> a >> b >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ar[i] = min(ar[i], a - 1);
        }

        long long sum = b;
        for (int i = 0; i < n; i++)
        {
            sum += ar[i];
        }

        cout << sum << endl;
    }
    return 0;
}