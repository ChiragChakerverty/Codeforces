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
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i]) swap(a[i],b[i]); 
        }
        ll ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=ans+abs(a[i]-a[i+1]);
        }
        for(int i=0;i<n-1;i++)
        {
            ans=ans+abs(b[i]-b[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}