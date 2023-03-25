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
      vector<int> v,e;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
         e.push_back(x);
      }
      sort(e.begin(),e.end());
      int first=e[n-1];
      int second=e[n-2];
      for(int i=0;i<n;i++)
      {
         if(v[i]!=first) cout<<(v[i]-first)<<" ";
         else cout<<(first-second)<<" ";
      }
      cout<<endl;
   }
   return 0;
}