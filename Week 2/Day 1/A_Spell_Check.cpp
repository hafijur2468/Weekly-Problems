#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<char> s;
    string name = "Timur";
    for (char i : name)
    {
        s.insert(i);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            char nm;
            cin >> nm;
            st.insert(nm);
        }

        if (s.size() != st.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            if (st != s)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}