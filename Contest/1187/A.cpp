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
        ll n,s,t; cin>>n>>s>>t;
        ll ans=min(s,t);
        cout<<n-ans+1<<endl;
    }
    return 0;
}