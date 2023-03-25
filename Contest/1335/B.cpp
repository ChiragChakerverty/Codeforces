#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s="abcdefghijklmnopqrstuvwxyz";
        // for(int i=0;i<26;i++) cout<<s[i];
        int repeat=n/b,rem=n%b;
        int c=b;
        while (repeat--)
        {
            int i = 0;
            b=c;
            while (b--)
            {
                cout << s[i];
                i++;
            }
        }
        int i = 0;
        while (rem--)
        {
            cout << s[i];
            i++;
        }
        cout<<endl;
    }
    return 0;
}