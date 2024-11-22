class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.size();

        int l = 0, r = 0, ans = -1;

        map<char, int> count;

        while (r < n)
        {
            count[s[r]]++;
            if (count.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (count.size() > k && l <= r)
                {
                    count[s[l]]--;
                    if (count[s[l]] == 0)
                    {
                        count.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};