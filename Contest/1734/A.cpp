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
      sort(v.begin(),v.end());
      int min=INT32_MAX;
      int ans=0;
      for(int i=0;i<n-2;i++)
      {
         ans=abs(v[i]-v[i+1])+abs(v[i+1]-v[i+2]);
         if(ans<min) min=ans;
      }
      cout<<min<<endl;
   }
   return 0;
}