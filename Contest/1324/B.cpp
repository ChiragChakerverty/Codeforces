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
       for(int i=0;i<n;i++) cin>>arr[i];
       int count=1;
       for(int i=0;i<n-2;i++)
       {
           count=1;
           for(int j=i+2;j<n;j++)
           {
               if(arr[j]==arr[i])
               {
                   count++;
                   break; 
               }
           }
           if(count==2)
           {
               break;
           }
       }
       if(count==2) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}