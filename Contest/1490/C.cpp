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
       ull x; cin>>x;
       int flag=0;
       ll low=1;
       ll high=cbrt(x);
       while(low<=high)
       {
           ll sum=(low*low*low)+(high*high*high);
           if(sum==x)
           {
               cout<<"YES"<<endl;
               flag=1;
               break;
           }
           else if(sum<x)
           {
               low++;
           }
           else high--;
       }
       if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}