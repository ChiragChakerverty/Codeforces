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
      if(n%2) cout<<-1<<endl;
      else 
      {
         cout<<0<<" "<<0<<" "<<(n/2)<<endl;
      }
   }
   return 0;
}