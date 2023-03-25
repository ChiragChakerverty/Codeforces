#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int min=9999;
    for(int i=0;i<=m-n;i++)
    {
        int ans=v[i+n-1]-v[i];
        if(ans<min) min=ans;
    }
    cout<<min<<endl;

}