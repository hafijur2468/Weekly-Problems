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
        priority_queue<int> pq;

        long long hero_pow = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                pq.push(x);
            }
            else if (x == 0)
            {
                if (!pq.empty())
                {
                    hero_pow += pq.top();
                    pq.pop();
                }
            }
        }
        cout << hero_pow << endl;
    }

    return 0;
}