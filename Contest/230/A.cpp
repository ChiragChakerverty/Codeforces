#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,n; cin>>s>>n;
    multimap<int,int> m;
    while(n--)
    {
        int x,y; cin>>x>>y;
        m.insert(pair<int,int>(x,y));
    }
    int flag=1;
    for(auto it=m.begin();it!=m.end();++it)
    {
        if(s>(*it).first) s=s+(*it).second;
        else if(s<=(*it).first) 
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    return 0;
}