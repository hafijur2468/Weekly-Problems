#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, rs;
        cin >> s;
        rs = s;
        reverse(rs.begin(), rs.end());

        cout << min(s, rs + s) << endl;
    }
    return 0;
}