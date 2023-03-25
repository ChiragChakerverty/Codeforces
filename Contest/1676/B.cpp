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
        ll n; cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans=0;
        ll q=*min_element(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            ans=ans+(arr[i]-q);
        }
        cout<<ans<<endl;
    }
    return 0;
}