#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;

    bool sereja_turn = true;

    int sereja_sum = 0;
    int dima_sum = 0;

    while (l <= r)
    {

        if (a[l] > a[r])
        {
            if (sereja_turn)
            {
                sereja_sum += a[l];
            }
            else
            {
                dima_sum += a[l];
            }
            l++;
        }
        else
        {
            if (sereja_turn)
            {
                sereja_sum += a[r];
            }
            else
            {
                dima_sum += a[r];
            }
            r--;
        }
        sereja_turn = !sereja_turn;
    }

    cout << sereja_sum << " " << dima_sum << endl;
    return 0;
}