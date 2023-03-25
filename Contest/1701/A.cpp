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
      int arr[2][2];
      int sum=0;
      for(int i=0;i<2;i++)
      {
         for(int j=0;j<2;j++)
         {
            cin>>arr[i][j];
            sum=sum+arr[i][j];
         }
      }
      int ans=0;
      if(sum==0) ans=0;
      else if(sum==4) ans=2;
      else ans=1;
      cout<<ans<<endl;
   }
   return 0;
}