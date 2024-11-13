long long maximumSumSubarray(vector<int> &a, int k)
{
    int n = a.size();
    long long ans = 0, sum = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        if (r - l + 1 == k)
        {
            ans = max(sum, ans);
            sum -= a[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    return ans;
}