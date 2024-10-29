#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    std::cin >> n;
    int a[n];
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    sort(odd.begin(), odd.end(), greater<>());

    if (odd.size() % 2 != 0)
    {
        odd.pop_back();
    }
    long long evensum = 0, oddsum = 0;

    for (int i = 0; i < even.size(); i++)
    {
        evensum += even[i];
    }

    for (int i = 0; i < odd.size(); i++)
    {
        oddsum += odd[i];
    }
    cout << evensum + oddsum << endl;

    return 0;
}