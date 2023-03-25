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
    while(t--)
    {
       int n; cin>>n;
       string s; cin>>s;
       vector<int> v;
       int count=1;
       for(int i=1;i<n;i++)
       {
           if(s[i]==s[i-1]) count++;
           else 
           {
               v.push_back(count);
               count=1;
           }
           
       }
       v.push_back(count);
       //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
       //cout<<endl;
       int ans=0;
       for(int i=0;i<v.size();i++)
       {
           if(v[i]%2==0) continue;
           else 
           {
               ans++;
               v[i+1]--;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}