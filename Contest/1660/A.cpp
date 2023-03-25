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
       ll a,b; cin>>a>>b;
       if(a==0)
       {
           cout<<1<<endl;
           continue;
       }
       else
       {
           ll ans=(2*b)+a+1;
           cout<<ans<<endl;
       }
    }
    return 0;
}