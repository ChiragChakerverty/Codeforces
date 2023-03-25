#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
       int n; cin>>n;
       int arr[n];
       int count_0=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]==0) count_0++;
       }
       int ans=0;
       if(count_0==0)
       {
           set<int> s(arr,arr+n);
           if(s.size()<n)
           {
               ans=n;
           }
           else ans=n+1;
       }
       else
       {
           n=n-count_0;
           ans=n;
       }
       cout<<ans<<endl;
    }
    return 0;
}