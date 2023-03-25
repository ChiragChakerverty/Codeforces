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
   ll arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   ll sum=0;
   int flag=0;
   sum=arr[0]+arr[1];
   for(int i=0;i<=n-3;i++)
   {
      if(sum>arr[i+2])
      {
         cout<<"YES"<<endl;
         flag=1;
         break;
      }
      sum=sum-arr[i];
      sum=sum+arr[i+2];
   }
   if(flag==0) cout<<"NO"<<endl;
   return 0;
}