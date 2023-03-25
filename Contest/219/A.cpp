#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

bool by_value(pair<char,int> a , pair<char,int> b) 
{
    return a.second>b.second;
}

int main()
{   
    int k; cin>>k;
    string s; cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    vector<pair<char,int>> v;
    for(auto &it : m)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end(),by_value);
    string ans="";
    //cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        if((v[i].second)%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        else 
        {
            int x=(v[i].second)/k;
            while(x--) ans=ans+v[i].first;
        }
    }
    while(k--) cout<<ans;
    return 0;
}