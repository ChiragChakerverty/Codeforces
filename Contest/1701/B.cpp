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
   while (t--)
   {
      int n; cin>>n;
      int cost=n/2;
      int d=2;
      cout<<d<<endl;
      vector<int> v;
      int factor=1;
      while(factor<=n)
      {  
         int check=factor;
         while(check<=n)
         {
            v.push_back(check);
            check=check*2;
         }
         factor=factor+2;
      }
      for(int i=0;i<v.size();i++)
      {
         cout<<v[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}