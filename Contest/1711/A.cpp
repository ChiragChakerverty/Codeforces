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
      if(n==1)
      {
         cout<<1<<endl;
         continue;
      }
      vector<int> v(n);
      for(int i=0;i<n;i++)
      {
         v[i]=i+1;
      }
      for(int i=0;i<n-1;i=i+2)
      {
         swap(v[i],v[i+1]);
      }
      if(n%2) swap(v[n-2],v[n-1]);
      for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
      cout<<endl;
   }
   return 0;
}