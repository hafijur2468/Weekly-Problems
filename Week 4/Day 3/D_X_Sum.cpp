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
        int n, m;
        cin >> n >> m;

        int a[n][m];
        long long maximum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long sum = 0;
                long long tmp_sum = 0;
                tmp_sum = a[i][j];

                int tmp_i = i - 1, tmp_j = j - 1;

                while (tmp_i >= 0 && tmp_j >= 0)
                {
                    tmp_sum += a[tmp_i][tmp_j];
                    tmp_i--;
                    tmp_j--;
                }

                tmp_i = i - 1;
                tmp_j = j + 1;

                while (tmp_i >= 0 && tmp_j < m)
                {
                    tmp_sum += a[tmp_i][tmp_j];
                    tmp_i--;
                    tmp_j++;
                }

                tmp_i = i + 1;
                tmp_j = j - 1;

                while (tmp_i < n && tmp_j >= 0)
                {
                    tmp_sum += a[tmp_i][tmp_j];
                    tmp_i++;
                    tmp_j--;
                }

                tmp_i = i + 1;
                tmp_j = j + 1;

                while (tmp_i < n && tmp_j < m)
                {
                    tmp_sum += a[tmp_i][tmp_j];
                    tmp_i++;
                    tmp_j++;
                }

                maximum = max(maximum, tmp_sum);
            }
        }
        cout << maximum << endl;
    }
    return 0;
}