#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll n; cin>>n;
   int ans=0;
   int q=0;
   if(n/100>0)
   {
      q=n/100;
      ans=ans+q;
      n=n%100;
   }
   if(n/20>0)
   {
      q=n/20;
      ans=ans+q;
      n=n%20;
   }
   if(n/10>0)
   {
      q=n/10;
      ans=ans+q;
      n=n%10;
   }
   if(n/5>0)
   {
      q=n/5;
      ans=ans+q;
      n=n%5;
   }
   if(n/1>0)
   {
      q=n/1;
      ans=ans+q;
      n=n%1;
   }
   cout<<ans<<endl;
   return 0;
}