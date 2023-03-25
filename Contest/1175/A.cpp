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
       ull n,k; cin>>n>>k;
       ull count=0;
       while(n>0)
       {
          ull rem=n%k;
          if(rem==0)
          {
              n=n/k;
              count++;
          }
          else 
          {
              n=n-rem;
              count=count+rem;
          }
       }
       cout<<count<<endl;
    }
    return 0;
}