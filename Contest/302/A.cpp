#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m; cin>>n>>m;
   int arr[n];
   int c1=0,c2=0;
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      if(arr[i]==1) c1++;
      else c2++;
   }
   while(m--)
   {
      int l,r; cin>>l>>r;
      int count=r-l+1;
      if(count%2) cout<<0<<endl;
      else 
      {
         if(count/2<=c1 && count/2<=c2) cout<<1<<endl;
         else cout<<0<<endl;
      }
   }
   return 0;
}