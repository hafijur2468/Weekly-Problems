#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, t;
    cin >> a >> b >> t;

    int s = (t + 0.5) / a;
    cout << s * b << endl;
    return 0;
}