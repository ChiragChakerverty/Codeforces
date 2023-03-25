#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   int ans=0;
   int multiplier=101;
   while(n--)
   {
      int a,p; cin>>a>>p;
      if(p<multiplier) multiplier=p;
      ans=ans+(multiplier*a);
   }
   cout<<ans<<endl;
   return 0;
}