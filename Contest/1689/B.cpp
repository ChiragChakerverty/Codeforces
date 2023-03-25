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
        int n; cin>>n;
        vector<int> v,q;
        for(int i=0;i<n;i++) 
        {
            int x; cin>>x;
            v.push_back(x);
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        q=v;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(q[i]!=v[i]) continue;
            else 
            {
                if(i!=n-1) swap(v[i],v[i+1]);
                else if(i==n-1) swap(v[i-1],v[i]);
            }
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}