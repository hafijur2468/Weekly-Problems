// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int gcdArray(vector<int> arr)
// {
//     int result = arr[0];
//     for (int i = 1; i < arr.size(); ++i)
//     {
//         result = gcd(result, arr[i]);
//         if (result == 1)
//         {
//             return 1; // Early exit if GCD becomes 1
//         }
//     }
//     return result;
// }

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

//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int d = gcdArray(a);

//         if (d == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a != 0)
            {
                mp[a]++;
            }
        }
        if (mp.size() == 0 || mp.size() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
