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
        vector<ll> v;
        ll sticks=2;
        v.push_back(2);
        ll increment=5;
        while(sticks<1e9)
        {
            sticks=sticks+increment;
            v.push_back(sticks);
            increment=increment+3;
        }
        int ans=0;
        //for(int i=0;i<5;i++) cout<<v[i]<<" ";
        ll n; cin>>n;
        while(n>0)
        {
            auto it=lower_bound(v.begin(),v.end(),n);
            if(*it==n)
            {
                ans++;
                n=n-n;
            }
            else 
            {
                ans++;
                n=n-(*(it-1));
                if(n<0) ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}