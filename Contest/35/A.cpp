#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   int n; cin>>n;
   int ans=n;
   int a=3;
   while(a--)
   {  
      int x,y;
      cin>>x>>y;
      if(x==ans)
      {
         ans=y;
         continue;
      }
      else if(y==ans)
      {
         ans=x;
         continue;
      } 
   }
   cout<<ans<<endl;
   return 0;
}
// 1 2 1 3
// 1 3 4 7