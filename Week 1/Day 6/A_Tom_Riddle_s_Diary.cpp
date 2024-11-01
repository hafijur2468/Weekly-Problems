#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (st.find(s) != st.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            st.insert(s);
        }
    }

    return 0;
}