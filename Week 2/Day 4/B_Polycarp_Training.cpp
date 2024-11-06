#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> mst;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mst.insert(x);
    }

    int day = 0, problem = 1;

    while (!mst.empty())
    {
        auto Lb = mst.lower_bound(problem);
        if (Lb != mst.end())
        {
            day++;
            mst.erase(Lb);
        }
        else
        {
            break;
        }
        problem++;
    }

    cout << day << endl;
    return 0;
}