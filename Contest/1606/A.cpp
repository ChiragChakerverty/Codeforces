#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int count_ab=0,count_ba=0;
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,2)=="ab")
            {
                count_ab++;
                i++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,2)=="ba")
            {
                count_ba++;
                i++;
            }
        }
        if(count_ab==count_ba) cout<<s<<endl;
        else 
        {
            if(s[0]=='a') s[0]='b';
            else if(s[0]=='b') s[0]='a';
            cout<<s<<endl;
        }
    }
    return 0;
}