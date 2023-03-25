#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;

bool sort_by_value(pair<string,int> a, pair<string,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n; cin>>n;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second=(v[i].first).size();
    }
    sort(v.begin(),v.end(),sort_by_value);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second;
    // }
    int flag;
    for(int i=1;i<n;i++)
    {   
        flag=0;
        for(int j=0;j<=v[i].second-v[i-1].second;j++)
        {
            if((v[i].first).substr(j,v[i-1].second)==v[i-1].first)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) break;
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v[i].first<<endl;
        }
    } 
    return 0;
}