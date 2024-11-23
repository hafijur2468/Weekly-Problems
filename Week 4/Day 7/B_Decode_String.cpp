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

        string num;
        cin >> num;

        string s;

        int i = n - 1;

        while (i >= 0)
        {
            if (num[i] == '0')
            {
                int a = (num[i - 2] - '0') * 10 + (num[i - 1] - '0');
                char word = 'a' + a - 1;
                s.push_back(word);
                i = i - 3;
            }
            else
            {
                char word = 'a' + (num[i] - '0') - 1;
                s.push_back(word);
                i--;
            }
        }
        reverse(s.begin(), s.end());

        cout << s << endl;
    }
    return 0;
}