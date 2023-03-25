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
      int n,a,b; cin>>n>>a>>b;
      if(n==a && a==b) cout<<"Yes"<<endl;
      else 
      {
         if((n-a-b)>1) cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
      }
   }
   return 0;
}