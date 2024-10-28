#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ar[26];
    for (int i = 0; i < 26; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int n = s[i] - 'a';
        ar[n]++;
    }

    int found = 0;

    for (int i = 0; i < 26; i++)
    {

        if (ar[i] == 0)
        {
            char c = i + 'a';
            cout << c << endl;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "None" << endl;
    }
    return 0;
}