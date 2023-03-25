#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
    int n; cin>>n;
    vector<int> boys;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        boys.push_back(x);
    }
    int m; cin>>m;
    vector<int> girls;
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        girls.push_back(x);
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int ans=0;
    for(auto it=boys.begin();it!=boys.end();++it)
    {
        for(auto it2=girls.begin();it2!=girls.end();++it2)
        {
            int check=abs((*it)-(*it2));
            if(check<=1)
            {
                ans++;
                boys.erase(it);
                girls.erase(it2);
                it=--boys.begin();
                it2=--girls.begin();
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}