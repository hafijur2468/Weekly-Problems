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
        string s;
        cin >> s;

        vector<long long> d;

        long long sum = 0;
        int change = 0;

        for (int i = 0; i < n; i++)
        {
            long long l = i;
            long long r = n - i - 1;

            if (s[i] == 'L')
            {
                if (r > l)
                {
                    change++;
                    sum += r;
                    d.push_back(r - l);
                }
                else
                {
                    sum += l;
                }
            }
            else
            {
                if (l > r)
                {
                    change++;
                    sum += l;
                    d.push_back(l - r);
                }
                else
                {
                    sum += r;
                }
            }
        }

        vector<long long> ans(n + 1);

        for (int i = change; i <= n; i++)
        {
            ans[i] = sum;
        }

        sort(d.begin(), d.end(), greater<long long>());

        for (int i = change - 1; i >= 1; i--)
        {
            sum -= d.back();
            d.pop_back();
            ans[i] = sum;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}