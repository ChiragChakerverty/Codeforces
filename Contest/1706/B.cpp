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
      map<int,vector<int>> m;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         m[x].push_back(i);
      }
      vector<int> ans(n+1);
      for(auto it=m.begin();it!=m.end();++it)
      {
         vector<int> temp=it->second;
         int sum=1;
         for(int j=1;j<temp.size();j++)
         {
            if((temp[j]-temp[j-1])%2) sum++;
         }
         ans[it->first]=sum;
      }
      for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
      cout<<endl;
   }
   return 0;
}