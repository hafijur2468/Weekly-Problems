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
        string a, b;
        cin >> a >> b;

        char lasta = a.back();
        char lastb = b.back();

        if (lasta == lastb)
        {
            if (a.size() == b.size())
            {
                cout << "=" << endl;
            }
            else if (lasta == 'S')
            {
                if (a.size() < b.size())
                {
                    cout << '>' << endl;
                }
                else
                {
                    cout << '<' << endl;
                }
            }
            else if (lasta == 'L')
            {
                if (a.size() < b.size())
                {
                    cout << '<' << endl;
                }
                else
                {
                    cout << '>' << endl;
                }
            }
        }
        else
        {
            if (lasta < lastb)
            {
                cout << '>' << endl;
            }
            else
            {
                cout << '<' << endl;
            }
        }
    }
    return 0;
}