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
        long long n;
        cin >> n;
        vector<long long> res;
        res.push_back(n);

        for (int k = 0; k <= __lg(n); k++)
        {

            if ((n >> k) & 1)
            {
                long long value = n - (1LL << k);
                if (value > 0)
                    res.push_back(value);
            }
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;

        for (auto val : res)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}