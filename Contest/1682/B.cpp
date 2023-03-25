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
       vector<ll> v;
       ll n; cin>>n;
       for(ll i=0;i<n;i++)
       {
           ll x; cin>>x;
           v.push_back(x);
       }
       vector<ll> check=v;
       vector<ll> ans;
       sort(check.begin(),check.end());
       for(ll i=0;i<n;i++)
       {
           if(check[i]==v[i]) continue; 
           else 
           {
               ans.push_back(check[i]);
           }
       }
        int lessgo=ans[0];
       for(ll i=1;i<ans.size();i++)
       {
           lessgo=lessgo&ans[i];
       }
       cout<<lessgo<<endl;
    }
    return 0;
}