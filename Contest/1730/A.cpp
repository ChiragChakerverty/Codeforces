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
      int n,c; cin>>n>>c;
      map<int,int> m;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         m[x]++;
      }
      int cost=0;
      for(auto it=m.begin();it!=m.end();it++)
      {
         if(it->second>=c) cost=cost+c;
         else cost=cost+it->second;
      }
      cout<<cost<<endl;

   }
   return 0;
}