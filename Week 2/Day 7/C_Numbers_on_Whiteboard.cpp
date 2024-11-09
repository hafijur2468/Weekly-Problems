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
        multiset<int> nums;

        for (int i = 1; i <= n; i++)
        {
            nums.insert(i);
        }

        vector<pair<int, int>> ans;

        for (int i = 0; i < n - 1; i++)
        {
            auto it = --nums.end();
            int a = *it;
            nums.erase(it);

            it = --nums.end();
            int b = *it;
            nums.erase(it);

            nums.insert((a + b + 1) / 2);
            ans.push_back({a, b});
        }

        cout << *nums.begin() << endl;
        for (auto [x, y] : ans)
        {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
