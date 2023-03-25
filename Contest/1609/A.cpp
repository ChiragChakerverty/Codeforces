#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
 
const ll mod=1e9+7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       ll count=0;
       ull arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           while(arr[i]%2==0)
           {
               count++;
               arr[i]=arr[i]/2;
           }
       }
      // cout<<count<<endl;
       sort(arr,arr+n);
      // cout<<arr[n-1]<<endl;
       arr[n-1]=arr[n-1]*pow(2,count);
      // cout<<arr[n-1]<<endl;
       ull ans=0;
       for(int i=0;i<n;i++) ans=ans+arr[i];
       cout<<ans<<endl;
    }
    return 0;
}