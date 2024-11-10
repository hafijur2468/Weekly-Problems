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
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            nums.push_back(a);
        }

        sort(nums.begin(), nums.end());

        if (n <= 3)
        {
            cout << 0 << endl;
            continue;
        }

        int w = nums[n - 3] - nums[0];
        int x = nums[n - 1] - nums[2];
        int y = nums[n - 2] - nums[1];

        int res = min({w, x, y});

        cout << res << endl;
    }
    return 0;
}