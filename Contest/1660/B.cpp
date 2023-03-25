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
    while (t--)
    {
       ll n; cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       if(n==1)
       {
           if(arr[0]==1 || arr[0]==0)
           {
               cout<<"YES"<<endl;
               continue;
           }
           else 
           {
               cout<<"NO"<<endl;
               continue; 
           }
       }
       sort(arr,arr+n);
       ll check=abs(arr[n-1]-arr[n-2]);
      // cout<<check<<endl;
       if(check>1) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
      
    }
    return 0;
}