#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<pair<int, int>> st;
    multiset<pair<int, int>> mset;
    vector<int> ans;

    int n;
    cin >> n;
    int customerno = 1;
    for (int i = 1; i <= n; i++)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int money;
            cin >> money;
            st.insert({customerno, money});
            mset.insert({money, -customerno});
            customerno++;
        }
        else if (query == 2)
        {
            int pos = st.begin()->first;
            int money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            mset.erase({money, -pos});
        }
        else
        {
            int pos = -mset.rbegin()->second;
            int money = mset.rbegin()->first;
            ans.push_back(pos);
            mset.erase(--mset.end());
            st.erase({pos, money});
        }
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}