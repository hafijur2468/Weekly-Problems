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
        vector<string> p1;
        vector<string> p2;
        vector<string> p3;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            p1.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            p2.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            p3.push_back(s);
        }

        std::map<string, int> wordfreq;

        for (string s : p1)
        {
            wordfreq[s]++;
        }

        for (string s : p2)
        {
            wordfreq[s]++;
        }

        for (string s : p3)
        {
            wordfreq[s]++;
        }

        int p1score = 0;
        int p2score = 0;
        int p3score = 0;

        for (int i = 0; i < n; i++)
        {
            if (wordfreq[p1[i]] == 1)
            {
                p1score += 3;
            }
            else if (wordfreq[p1[i]] == 2)
            {
                p1score += 1;
            }
            else
            {
                p1score += 0;
            }

            if (wordfreq[p2[i]] == 1)
            {
                p2score += 3;
            }
            else if (wordfreq[p2[i]] == 2)
            {
                p2score += 1;
            }
            else
            {
                p2score += 0;
            }

            if (wordfreq[p3[i]] == 1)
            {
                p3score += 3;
            }
            else if (wordfreq[p3[i]] == 2)
            {
                p3score += 1;
            }
            else
            {
                p3score += 0;
            }
        }

        cout << p1score << " " << p2score << " " << p3score << endl;
    }
    return 0;
}
