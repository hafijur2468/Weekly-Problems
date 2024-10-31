#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    map<string, int> count;

    while (t--)
    {
        string name;
        cin >> name;

        if (count.find(name) == count.end())
        {
            count[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            int addnum = ++count[name];
            string newname = name + to_string(addnum);

            while (count.find(newname) != count.end())
            {
                addnum = ++count[name];
                newname = name + to_string(addnum);
            }
            count[newname] = 0;
            cout << newname << endl;
        }
    }
    return 0;
}