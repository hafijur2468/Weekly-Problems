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

        int l = 0, r = s.size() - 1;
        int len=0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                len = r - l + 1;
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        cout << len << endl;
    }
    return 0;
}