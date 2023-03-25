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
        ll n; cin>>n;
        ll even=0,odd=0;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            if(x%2==0) even++;
            else odd++;
        }
        cout<<min(odd,even)<<endl;
    }
    return 0;
}