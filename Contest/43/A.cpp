#include<bits/stdc++.h>

using namespace std;
int main()
{   
    long long int n; cin>>n;
    map<string,int> m;
    while(n--)
    {
        string s; cin>>s;
        m[s]++;
    }
    int max=0;
    for(auto it=m.begin();it!=m.end();++it)
    {
        if(it->second>max)
        {
            max=it->second;
        }
    }
    for(auto it=m.begin();it!=m.end();++it)
    {
        if(it->second==max) cout<<it->first;
    }
    return 0;
}