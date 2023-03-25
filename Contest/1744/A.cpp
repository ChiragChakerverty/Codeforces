#include <bits/stdc++.h>
using namespace std;

#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;


int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      vector<int> v;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
      }
      string s; cin>>s;
      vector<int> arr;
      string ans="";
      bool flag=true;
      arr.push_back(v[0]);
      ans=ans+s[0];
      for(int i=1;i<v.size();i++)
      {
         auto it=find(arr.begin(),arr.end(),v[i]);
         if(it==arr.end())
         {
            ans=ans+s[i];
            arr.push_back(v[i]);
         }
         else
         {
            int x=*it;
            int j=0;
            for(int k=0;k<v.size();k++)
            {
               if(v[k]==x) break;
               else j++;
            }
            ans=ans+s[j];
         }
      }
      if(s==ans) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
   }
   return 0;
}