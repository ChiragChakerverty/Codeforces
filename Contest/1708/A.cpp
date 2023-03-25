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
      vector<int> v;
      for(int i=0;i<n;i++)
      {
         int x; cin>>x;
         v.push_back(x);
      }
      int flag=1;
      for(int i=1;i<n;i++)
      {
         int k=v[i]%v[i-1];
         //cout<<k<<endl;
         if(k==0) 
         {  
            v[i]=v[i-1];
         }
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