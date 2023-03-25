#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
        cout << n << endl;
    else if(n<0 && (n%10==0) && n>-99) cout<<0<<endl;
    else
    {
        string s = to_string(n);

        for (int i = 0; i < s.size() - 2; i++)
            cout << s[i];
        if (s[s.size() - 1] > s[s.size() - 2])
            cout << s[s.size() - 2];
        else
            cout << s[s.size() - 1];
    }
    return 0;
}