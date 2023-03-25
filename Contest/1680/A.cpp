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
        int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
        int ans=0;
        if(l2>=l1 && l2<=r1) ans=l2;
        else if(l1>=l2 && l1<=r2) ans=l1;
        else ans=l1+l2;
        cout<<ans<<endl;
    }
    return 0;
}