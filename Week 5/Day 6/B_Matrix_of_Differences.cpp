// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<vector<int>> a(n, vector<int>(n));

//         int l = 1, r = n * n;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     a[i][j] = l++;
//                 }
//                 else
//                 {
//                     a[i][j] = r--;
//                 }
//             }

//             if (i % 2 == 1)
//             {
//                 reverse(a[i].begin(), a[i].end());
//             }
//         }

//         for (auto row : a)
//         {
//             for (auto j : row)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

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

        vector<vector<int>> a(n, vector<int>(n));

        int c = 0, l = 1, r = n * n;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    c++;
                    if (c % 2)
                    {
                        a[i][j] = l;
                        l++;
                    }
                    else
                    {
                        a[i][j] = r;
                        r--;
                    }
                }
            }
            else
            {
                for (int j = n-1; j >= 0; j--)
                {
                    c++;
                    if (c % 2)
                    {
                        a[i][j] = l;
                        l++;
                    }
                    else{
                        a[i][j] = r;
                        r--;
                    }
                }
            }
        }

        for (auto row : a)
        {
            for (auto j : row)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
