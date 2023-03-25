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
      int n,k; cin>>n>>k;
      int ans=0;
      while(n--)
      {
         int x; cin>>x;
         if(x==1) ans++;
      }
      if(ans>0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}