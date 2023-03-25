#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    string s; cin>>s;
    int k; cin>>k;
    int arr[26];
    for(int i=0;i<26;i++) cin>>arr[i];
    ll ans=0;
    vector<pair<char,int>> v;
    string t="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++)
    {
        v.push_back({t[i],arr[i]});
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==v[j].first) ans=ans+v[j].second*(i+1);
        }
    }
    sort(arr,arr+26);
    //cout<<ans<<endl;
    ll count=s.size()+1;
    while(k--)
    {
        ans=ans+arr[25]*count;
        count++;
    }
    cout<<ans<<endl;
    return 0;
}