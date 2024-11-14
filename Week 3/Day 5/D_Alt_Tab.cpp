#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<string> st;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        st.push(a);
    }

    map<string, int> mp;

    while(!st.empty()){
        string s = st.top();
        if(mp.find(s) == mp.end()){
            cout << s.substr(s.size() - 2, 2);
        }
        mp[s]++;
        st.pop();
    }
    return 0;
}