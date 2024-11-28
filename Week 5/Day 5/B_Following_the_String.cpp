#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string small_letters = "abcdefghijklmnopqrstuvwxyz";

    while (t--)
    {

        int n;
        cin >> n;

        map<char, int> count;

        for (char c : small_letters)
        {
            count[c] = 0;
        }

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            for (auto it : count)
            {
                if (it.second == a[i])
                {
                    cout << it.first;
                    count[it.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}