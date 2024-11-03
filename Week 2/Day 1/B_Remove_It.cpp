#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a != m)
        {
            v.push_back(a);
        }
    }

    if (!v.empty())
    {
        for (int i : v)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << endl;
    }
    return 0;
}