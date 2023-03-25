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
      int count=1;
      while(count<=n)
      {
         int iter=count;
         cout<<1<<" ";
         iter--;
         while((iter-2)>=0) 
         {
            cout<<0<<" ";
            iter--;
         }
         if(iter==1) cout<<1<<" ";
         cout<<endl;
         count++;
      }

   }
   return 0;
}