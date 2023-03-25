#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;


int main()
{
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   ll ans=arr[0];
   int jumps=n+(n-1);
   for(int i=0;i<n-1;i++)
   {
       ans=ans+abs(arr[i+1]-arr[i]);
   }
   ans=ans+jumps;
   cout<<ans<<endl;
   return 0;
}