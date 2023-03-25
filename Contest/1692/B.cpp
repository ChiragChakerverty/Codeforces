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
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            m[x]++;
        }
        int dupli=0;
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if((it->second)>1) dupli=dupli+((it->second)-1);
            else continue;
        }
        if(dupli%2==0) ans=n-dupli;
        else if(dupli%2) ans=n-dupli-1;
        cout<<ans<<endl; 
    }
    return 0;
}