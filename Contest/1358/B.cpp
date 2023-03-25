#include <bits/stdc++.h>
#include <numeric>
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
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       sort(arr,arr+n);
       reverse(arr,arr+n);
       int ans=n+1;
       for(int i=0;i<n;i++)
       {
           if(ans<=arr[i]) ans--;
       }
       cout<<ans<<endl;
    }
    return 0;
}