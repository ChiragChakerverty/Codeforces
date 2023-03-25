#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
    ll a,b; cin>>a>>b;
    ll x=min(a,b);
    ll ans=1;
    for(int i=1;i<=x;i++)
    {
        ans=ans*i;
    }
    cout<<ans<<endl;
    return 0;
}