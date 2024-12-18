#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    int sum = 0;

    for (int msk = 0; msk < (1 << n); msk++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((msk >> j) & 1)
            {
                sum += a[j];
            }
            else
            {
                sum -= a[j];
            }
        }

        if (sum % 360==0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}