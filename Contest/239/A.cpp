#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int main()
{
    ll y,k,n; cin>>y>>k>>n;
    int q=y/k;
    q=q+1;
    int first=k*q-y;
    vector<int> v;
    while(first<n)
    {
        v.push_back(first);
        first=first+k;
    }
    vector<int> ans;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]+y<=n) ans.push_back(v[i]);
    }
    if(ans.size()==0) cout<<-1<<endl;
    else for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}