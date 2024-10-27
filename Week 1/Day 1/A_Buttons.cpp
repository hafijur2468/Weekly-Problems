#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    int sum;

    if (a > b)
    {
        sum = 2 * a - 1;
    }
    else if (a < b)
    {
        sum = 2 * b - 1;
    }
    else
    {
        sum = a + b;
    }
    cout << sum << endl;
    return 0;
}