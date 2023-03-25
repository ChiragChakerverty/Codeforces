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
       string s; cin>>s;
       int ans=0;
       int n=s.size();
       map<char,int> m;
       for(int i=0;i<n;i++)
       {
           m[s[i]]++;
           if(m[s[i]]>1)
           {
               ans=ans+2;
               m.clear();
           }
       }
       cout<<n-ans<<endl;
    }
    return 0;
}