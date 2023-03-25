#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

#define int long long

const ll mod = 1e9 + 7;



int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t;
   cin >> t;
   while(t--)
   {
      int n; cin>>n;
      int x; cin>>x;
      vector<int> v;
      for(int i=0;i<2*n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
      }
      sort(v.begin(),v.end());
      int flag=1;
      for(int i=0,j=n;i<n;i++,j++)
      {
         if(v[j]-v[i]>=x) continue;
         else 
         {
            flag=0;
            break;
         }
      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}