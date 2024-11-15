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

        set<int> s;
        bool has_dup = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.count(nums[i]))
            {
                cout << i + 1 << endl;
                has_dup = true;
                break;
            }
            s.insert(nums[i]);
        }
        if (!has_dup)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}