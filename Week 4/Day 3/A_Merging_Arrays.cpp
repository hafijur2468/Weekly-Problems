#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans.insert(a);
    }

    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        ans.insert(b);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}