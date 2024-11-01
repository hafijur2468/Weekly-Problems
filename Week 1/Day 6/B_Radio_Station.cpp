#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> ipname;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        ipname[b] = a;
    }

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        b.pop_back();

        cout << a << " " << b << "; #" << ipname[b] << endl;
    }
    return 0;
}