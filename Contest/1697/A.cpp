#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        int sum=0;
        while(n--)
        {
            int x; cin>>x;
            sum=sum+x;
        }
        int ans=sum-m;
        if(ans<0) ans=0;
        cout<<ans<<endl;
    }
    return 0;
}