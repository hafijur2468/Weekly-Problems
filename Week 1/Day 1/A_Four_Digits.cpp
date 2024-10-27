#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;

    int sz = str.size();
    int zerofillsize = 4 - sz;

    if (zerofillsize== 0)
    {
        cout << str;
    }
    else
    {
        string newstr(zerofillsize, '0');
        string s = newstr + str;
        cout << s << std::endl;
    }
    return 0;
}