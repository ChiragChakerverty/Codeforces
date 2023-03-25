#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
        }
        int lim = min(count_1, count_0);
        if (count_0 == 0 || count_1 == 0)
            cout << "NET" << endl;
        else
        {
            if (lim % 2)
                cout << "DA" << endl;
            else
                cout << "NET" << endl;
        }
    }
    return 0;
}