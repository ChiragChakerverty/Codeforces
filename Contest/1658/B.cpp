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
       if(n%2)
       {
           cout<<0<<endl;
           continue;
       }
       else 
       {
           ull ans=1;
           ull i=1;
           while(i<=(n/2))
           {
               ans=(ans*i)%998244353;
               i++;
           }
           ans=(ans*ans)%998244353;
           cout<<ans<<endl;
       }
    }
    return 0;
}