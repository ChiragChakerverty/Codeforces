#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    string s;
    cin >> s;
    ll flag = 0;
    ll index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) % 2 == 0)
            flag = 1;
    }
    if (flag == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (int(s[i]) % 2 == 0 && (int(s[i]) < int(s[s.size() - 1])))
            {
                swap(s[i], s[s.size() - 1]);
                cout << s << endl;
                return 0;
            }
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (int(s[i]) % 2 == 0 && (int(s[i]) > int(s[0])))
            {
                swap(s[i], s[0]);
                reverse(s.begin(),s.end());
                cout << s << endl;
                return 0;
            }
        }
    }
    return 0;
}