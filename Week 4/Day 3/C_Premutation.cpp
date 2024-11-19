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
        int a[n][n - 1];
        multiset<int> check;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == 0)
                {
                    check.insert(a[i][j]);
                }
            }
        }
        int first = 0;

        for (int i : check)
        {
            if (check.count(i) > 1)
            {
                first = i;
            }
        }
        int indx = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != first)
            {
                indx = i;
                break;
            }
        }

        vector<int> ans;
        ans.push_back(first);

        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(a[indx][i]);
        }

        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}