#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = 0, m = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] >= 65 && t[i] <= 90)
            t[i] = t[i] + 32;
    }
    for (int i = 0; i < s.size(); i++)
    {
        n = n + s[i];
        m = m + t[i];
        if (n < m)
        {
            cout << "-1" << endl;
            return 0;
        }
        else if (m < n)
        {
            cout << "1" << endl;
            return 0;
        }
    }
    if(m==n)
    cout<<"0"<<endl;
    return 0;
}