#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ideal = "abcdefghijklmnopqrstuvwxyz";
        string copy = s;
        sort(copy.begin(), copy.end());
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (copy[i] != ideal[i])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        else if (flag == 0)
        {
            while (s.size() != 0)
            {
                string w = s;
                sort(w.begin(), w.end());
                if (w[s.size() - 1] == s[0] )
                {
                    s.erase(0,1);
                }
                else if( w[s.size() - 1] == s[s.size() - 1])
                {
                    s.erase(s.size()-1,1);
                }
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            continue;
        else
            cout << "YES" << endl;
    }
    return 0;
}