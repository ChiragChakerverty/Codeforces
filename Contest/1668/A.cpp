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
       ll n,m; cin>>n>>m;
       ll ans=0;
       if(n==m) ans=abs(n-1)+abs(m-1);
       else if((n==1 && m==2) || (n==2 && m==1)) ans=1;
       else if((n==1 && m>2) || (m==1 && n>2)) ans=-1;
       else 
       {
           ll a=min(m,n);
           ans=2*(abs(a-1));
           ll chirag=abs(n-a)+abs(m-a);
           if(chirag%2==0) ans=ans+(2*chirag);
           else ans=ans+(2*chirag)-1;
       } 
       cout<<ans<<endl;
    }
    return 0;
}