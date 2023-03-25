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
       ll n,x; cin>>n>>x;
       vector<int> rich;
       vector<int> poor;
       ll extra_wealth=0;
       for(ll i=0;i<n;i++)
       {
           ll q; cin>>q;
           if(q>=x)
           {
               rich.push_back(q);
               extra_wealth=extra_wealth+(q-x);
           }
           else 
           {
               poor.push_back(q);
           }
       }
       ll ans=rich.size();
       sort(poor.begin(),poor.end(),greater<int>());
       for(int i=0;i<poor.size();i++)
       {
           extra_wealth=extra_wealth-(x-poor[i]);
           if(extra_wealth>=0) ans++;
           else break; 
       }
       cout<<ans<<endl;
    }
    return 0;
}