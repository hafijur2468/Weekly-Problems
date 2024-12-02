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
        int XOR = 0;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n;i++){
            cin >> a[i];
            XOR ^= a[i];
        }

        int res = XOR;

        for (int i = 0; i < n;i++){
            int current_xor = (XOR ^ a[i]);
            res = min(current_xor, res);
        }
        cout << res << endl;
    }
    return 0;
}