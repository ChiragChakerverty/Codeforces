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
   int m; cin>>m;
   int arr[m];
   for(int i=0;i<m;i++) cin>>arr[i];
   sort(arr,arr+m);
   if(arr[0]==1 || arr[m-1]==n)
   {
      cout<<"NO"<<endl;
      return 0;
   }
   for(int i=0;i<m-2;i++)
   {
      if((arr[i+1]-arr[i]==1) && (arr[i+2]-arr[i+1]==1))
      {
         cout<<"NO"<<endl;
         return 0;
      }
   }
   cout<<"YES"<<endl;
   return 0;
}