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
        vector<ll> a;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x; a.push_back(x);
        }
        vector<ll> b;
        for(ll i=0;i<n;i++)
        {
            ll q; cin>>q; b.push_back(q);
        }
        ll check=a[0]-b[0];
        int flag=0;
        ll max_check=check;
        for(ll i=1;i<n;i++)
        {
            check=a[i]-b[i];
            if(check<0)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            if(check>max_check) max_check=check;
        }
        if(flag==1) continue;
        if(n==1)
        {
            if(a[0]>=b[0]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else 
        {
            for(int i=0;i<n;i++)
            {
                a[i]=a[i]-max_check;
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]==b[i]) continue;
                else if(a[i]<0 && b[i]==0) continue;
                else 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}