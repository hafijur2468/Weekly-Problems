#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<string> found;
    vector<string> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (found.find(v[i]) == found.end())
        {
            ans.push_back(v[i]);
            found.insert(v[i]);
        }
    }

    for (string a : ans)
    {
        cout << a << endl;
    }
    return 0;
}
