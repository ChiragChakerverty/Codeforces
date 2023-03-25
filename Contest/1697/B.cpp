#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
    int n, q;
    cin >> n >> q;
    vector<int> price;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        price.push_back(x);
    }
    sort(price.begin(), price.end(),greater<int>());
    vector<int> hash(n);
    hash[0]=price[0];
    for(int i=1;i<n;i++)
    {
        hash[i]=price[i]+hash[i-1];
    }
    //for(int i=0;i<hash.size();i++) cout<<hash[i]<<" ";
    while (q--)
    {
        int x, y;
        cin>>x>>y;
        int ans=hash[x-1];
        if(x==y)
        {
            cout<<ans<<endl;
            continue;
        }
        else 
        {
            ans=ans-hash[x-y-1];
            cout<<ans<<endl;
        }
    }

    return 0;
}