#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll n,b,d; cin>>n>>b>>d;
   ll arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   ll ans=0; ll sum=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]>b) continue;
      else sum=sum+arr[i];
      if(sum>d)
      {
         ans++;
         sum=0;
      }
   }
   cout<<ans<<endl;
   return 0;
}