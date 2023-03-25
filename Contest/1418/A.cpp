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
       ull x,y,k; cin>>x>>y>>k;
       ull req=k+(k*y);
       ull sticks=1;
       ull ans=0;
       if((req-1)%(x-1)==0) ans=(req-1)/(x-1);
       else ans=((req-1)/(x-1))+1;
       cout<<ans+k<<endl;
    }
    return 0;
}