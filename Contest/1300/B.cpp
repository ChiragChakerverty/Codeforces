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
       vector<ll> v;
       for(ll i=0;i<2*n;i++)
       {
            ll x; cin>>x;
            v.push_back(x);
       }
       sort(v.begin(),v.end());
       cout<<v[n]-v[n-1]<<endl;
    }
    return 0;
}