#include <bits/stdc++.h>
using namespace std;
const int mxn = (1LL << 15);
vector<int> allpalindrome;

bool ispalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markpalindrome()
{
    for (int i = 0; i < mxn; i++)
    {
        if (ispalindrome(i))
        {
            allpalindrome.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    markpalindrome();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),count(mxn+1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }

        long long ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allpalindrome.size(); j++)
            {
                int cv = (a[i] ^ allpalindrome[j]);
                ans += count[cv];
            }
        }
        cout << ans/2 << endl;
    }
    return 0;
}