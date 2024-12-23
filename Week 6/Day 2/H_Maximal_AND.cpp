#include <bits/stdc++.h>
using namespace std;
const int Bt = 30;

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

        vector<int> a(n);

        int mxsetbit = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> bits(Bt + 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = Bt; j >= 0; j--)
            {
                if ((a[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }
        long long res = 0;

        for (int i = Bt; i >= 0; i--)
        {
            if (bits[i] == n)
            {
                res += (1LL << i);
            }
            else
            {
                int need = n - bits[i];
                if (k >= need)
                {
                    res += (1LL << i);
                    k -= need;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}