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
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int n1;
//         string s;
//         cin >> n1 >> s;
//         for (int i = 0; i < v.size(); i++)
//         {
//             int tmp = v[i];
//             for (int j = 0; j < s.size(); j++)
//             {
//                 if (s[j] == 'D')
//                 {
//                     if (tmp == 9)
//                     {
//                         tmp = 0;
//                     }
//                     else
//                     {
//                         tmp++;
//                     }
//                 }
//                 else if (s[j] == 'U')
//                 {
//                     if (tmp == 0)
//                     {
//                         tmp = 9;
//                     }
//                     else
//                     {
//                         tmp--;
//                     }
//                 }
//             }
//             v[i] = tmp;
//         }

//         for (int i : v)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            int n1;
            string s;
            cin >> n1 >> s;
            int tmp = v[i];

            for (char ch : s)
            {
                if (ch == 'D')
                {
                    tmp = (tmp == 9) ? 0 : tmp + 1;
                }
                else if (ch == 'U')
                {
                    tmp = (tmp == 0) ? 9 : tmp - 1;
                }
            }
            v[i] = tmp;
        }


        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
