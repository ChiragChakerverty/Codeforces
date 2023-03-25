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
       int n; cin>>n;
       map<int,int> m;
       for(int i=0;i<n;i++)
       {
           int x; cin>>x;
           m[x]++;
       }
       auto max_value=0,max_key=0;
       for(auto it=m.begin();it!=m.end();++it)
       {
           if(it->second>max_value)
           {
               max_value=it->second;
               max_key=it->first;
           }
       }
       int distinct=m.size()-1;
       int ans=0;
       if(distinct>max_value) ans=max_value;
       else if(distinct==max_value) ans=max_value;
       else 
       {
           if(abs(distinct-max_value)==1) ans=distinct;
           else ans=distinct+1;
       }
        cout<<ans<<endl;
    }
    return 0;
}