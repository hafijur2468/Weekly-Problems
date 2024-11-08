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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        string s;
        cin >> s;

        vector<tuple<char, int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({s[i], p[i], i});
        }

        sort(v.begin(), v.end());

        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++)
        {
            int indx = get<2>(v[i]);
            ans[indx] = i+1;
        }

        for (int a : ans)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}
