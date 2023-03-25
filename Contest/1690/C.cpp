#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

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
       ll n; cin>>n;
       vector<ll> s(n),f(n),d;
       for(ll i=0;i<n;i++) cin>>s[i];
       for(ll i=0;i<n;i++) cin>>f[i];
       if(n==1) cout<<f[0]-s[0]<<endl;
       else 
       {
           ll check=f[0]-s[0];
           d.push_back(check);
           for(ll i=1;i<n;i++)
           {
               if(s[i]>=f[i-1]) 
               {
                   check=f[i]-s[i];
                   d.push_back(check);
               }
               else 
               {
                   check=f[i]-f[i-1];
                   d.push_back(check);
               }
           }
            for(ll i=0;i<n;i++) cout<<d[i]<<" ";
            cout<<endl;
       } 
    }
    return 0;
}