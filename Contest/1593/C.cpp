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
       ll n,k; cin>>n>>k;
       vector<ll> v;
       for(ll i=0;i<k;i++)
       {
           ll x; cin>>x;
           v.push_back(x);
       }
       sort(v.begin(),v.end());
       ll ans=0;
       ll low=0;
       ll i=1;
       ll high=v[k-i];
       while(low<high)
       {
           if(k-i<0) break;
           high=v[k-i];
           if(low>=high) break;
           ll check=n-high;
           ans++;
           low=low+check;
           i++;
           //if(i==k-1) break;
       }
       cout<<ans<<endl;
    }
    return 0;
}