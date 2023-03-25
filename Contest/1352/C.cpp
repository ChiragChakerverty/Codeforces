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
      int n,k; cin>>n>>k;
      int ans=0;
      if(k<n) ans=k;
      else if(k==n) ans=k+1;
      else 
      {
         ans=k;
         int q=k/n;
         ans=ans+q;
         while(true)
         {
            int q2=ans-(q*n);
            if(q2<n) break;
            else 
            {
               int x=q2/n;
               ans=ans+x;
               q=q+x;
            }
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}