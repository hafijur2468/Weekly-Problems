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
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int timea = abs(a - 1);
            int timeb = abs(c - b) + abs(c - 1);

            if (timea < timeb)
            {
                cout << 1 << endl;
            }

            else if (timea > timeb)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }
    return 0;
}