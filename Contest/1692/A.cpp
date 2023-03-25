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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(b>a) ans++;
        if(c>a) ans++;
        if(d>a) ans++;
        cout<<ans<<endl;

    }
    return 0;
}