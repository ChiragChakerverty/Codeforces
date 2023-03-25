#include <bits/stdc++.h>
using namespace std;

#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
 

int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      vector<int> v,t;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
      }
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         t.push_back(x);
      }
      vector<pair<int,int>> ans;
      for(int i=0;i<n;i++)
      {
         ans.push_back(make_pair(v[i],t[i]));
      }
      sort(ans.begin(),ans.end(),sortbysecdesc);
      set<int> s;
      int pos=ans[0].first;
      int time=ans[0].second;
      for(int i=1;i<n;i++)
      {
         int extra=time-ans[i].second;
         if(ans[i].first>pos) 
         {
            if(ans[i].first-extra>pos) s.insert(ans[i].first-extra);
         }
         else if(ans[i].first<pos)
         {
            if(ans[i].first+extra<pos) s.insert(ans[i].first+extra);
         }
      }
      s.insert(pos);
      float haha=0;
      // for(auto it=s.begin();it!=s.end();++it)
      // {
      //    haha=haha+*it;
      // }
      // cout<<fixed<<setprecision(10)<<(haha/(s.size()*1.0))<<endl;
      auto it=s.begin();
      auto bt=--s.end();
      haha=(*it+*bt)/(2*1.0);
      cout<<fixed<<setprecision(10)<<haha<<endl;
   }
   return 0;
}