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
        ll n; cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            m[x]++;
        }
        int max_freq=0;
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(it->second>max_freq) max_freq=it->second;
        }
        //cout<<max_freq<<endl;
        int ans=0;
        if(max_freq==n)
        {
            cout<<0<<endl;
            continue; 
        }
        else 
        {   
            if(n%2==0)
            while(max_freq<n/2)
            {
                ans++;
                ans=ans+max_freq;
                max_freq=2*max_freq;
            }
            else 
            while(max_freq<=n/2)
            {
                ans++;
                ans=ans+max_freq;
                max_freq=2*max_freq;
            }
            ans++;
            ans=ans+(n-max_freq);
        }
        cout<<ans<<endl;
    }
    return 0;
}