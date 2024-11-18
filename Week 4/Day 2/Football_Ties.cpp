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
        int a, b;
        cin >> a >> b;

        int c = a % 3;
        int d = b % 3;

        if (c == d)
        {
            cout << c << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}