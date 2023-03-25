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
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      int a=n;
      int x=0;
      while(a--)
      {
         int b; cin>>b;
         int count_u=0,count_d=0;
         while(b--)
         {
            char c; cin>>c;
            if(c=='U') count_u++;
            else if(c=='D') count_d++;
         }
         int farq=max(count_d,count_u)-min(count_d,count_u);
         if(count_u>count_d) arr[x]=arr[x]-farq;
         else if(count_d>count_u) arr[x]=arr[x]+farq;
         if(arr[x]>9) arr[x]=arr[x]-10;
         else if(arr[x]<0) arr[x]=arr[x]+10;
         x++;
      }
      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
      cout<<endl;
   }
   return 0;
}