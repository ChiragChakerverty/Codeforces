#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a=2;
        while(true)
        {
            ll b=n-a-1;
            if(__gcd(a,b)==1)
            {
                cout<<a<<" "<<b<<" "<<1<<endl;
                break;
            }
            a++;
        }
        
    }
    return 0;
}