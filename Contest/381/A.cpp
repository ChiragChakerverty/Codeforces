#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int n; cin>>n;
    int sereja=0,dima=0;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    while(v.size()!=0)
    {
        int ser=max(v[0],v[v.size()-1]);
        auto it=find(v.begin(),v.end(),ser);
        sereja=sereja+ser;
        v.erase(it);
        if(v.size()==0) break;
        int dim=max(v[0],v[v.size()-1]);
        auto bt=find(v.begin(),v.end(),dim);
        dima=dima+dim;
        v.erase(bt);
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}