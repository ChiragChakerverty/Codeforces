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
   for(int i=0;i<n;i++) cin>>arr[i];
   int index=n;
   while(true)
   {
      int sum=accumulate(arr,arr+n,0);
      if(sum==0) break;
      for(int i=0;i<n;i++)
      {
         if(arr[i]<m)
         {
            if(accumulate(arr,arr+n,0)==arr[i])
            {
               index=i+1;
               cout<<index<<endl; return 0;
            }
            arr[i]=0;
         }
         else if(arr[i]==m)
         {
            if(accumulate(arr,arr+n,0)==arr[i])
            {
               index=i+1;
               cout<<index<<endl; return 0;
            }
            arr[i]=0;
            //cout<<"hi"<<endl;
         }
         else if(arr[i]>m)
         {
            if(accumulate(arr,arr+n,0)==arr[i])
            {
               index=i+1;
               cout<<index<<endl; return 0;
            }
            arr[i]=arr[i]-m;
         }
      }
   }
   cout<<index<<endl;
   return 0;
}