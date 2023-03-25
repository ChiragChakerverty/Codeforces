#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    map<string,int> m;
    int max=-1;
    int index=0;
    for(int i=0;i<s.size()-1;i++)
    {   
        m[s.substr(i,2)]++;
    }
    string ans;
    for(auto it:m)
    {
        if(it.second>max)
        {
            max=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}