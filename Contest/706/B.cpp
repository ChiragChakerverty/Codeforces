#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll n; cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll q; cin>>q;
    while(q--)
    {
        ll m; cin>>m;
        auto req=upper_bound(arr.begin(),arr.end(),m);
        cout<<req-arr.begin()<<endl;
    }  
    return 0;
}