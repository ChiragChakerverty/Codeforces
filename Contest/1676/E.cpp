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
    while(t--)
    {
       ll n,q;
       cin>>n>>q;
       ll arr[n];
       for(ll i=0;i<n;i++) cin>>arr[i];
       sort(arr,arr+n,greater<int>());
       ll hash[n];
       hash[0]=arr[0];
       for(int i=1;i<n;i++)
       {
           hash[i]=arr[i]+hash[i-1];
       }
       while(q--)
       {
           ll x; cin>>x;
           if(x>hash[n-1]) cout<<-1<<endl;
           else 
           {
               cout<<lower_bound(hash,hash+n,x)-hash+1<<endl;
           }
       }
    }
    return 0;
}