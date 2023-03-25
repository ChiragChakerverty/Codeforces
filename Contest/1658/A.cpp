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
       int n; cin>>n;
       string s; cin>>s;
       int ans=0;
       for(int i=0;i<n-1;i++)
       {
           if(s.substr(i,2)=="00") ans=ans+2;
       }
       for(int i=0;i<n-2;i++)
       {
           if(s.substr(i,3)=="010") ans=ans+1;
       }
       cout<<ans<<endl;
    }
    return 0;
}