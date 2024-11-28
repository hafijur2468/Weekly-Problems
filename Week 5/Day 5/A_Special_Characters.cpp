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

        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        char ch = 'A';
        string ans = "";

        while (n)
        {
            ans += ch;
            ans += ch;
            ch++;
            n -= 2;
        }
        cout << "YES" << endl
             << ans << endl;
    }
    return 0;
}