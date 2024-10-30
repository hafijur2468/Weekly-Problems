#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<pair<string, string>> tree_colors;

    for (int i = 0; i < n; i++)
    {
        string tree, color;
        cin >> tree >> color;
        tree_colors.insert({tree, color});
    }

    cout << tree_colors.size() << endl;
    return 0;
}