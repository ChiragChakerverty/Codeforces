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
       int a[n],b[n];
       for(int i=0;i<n;i++) cin>>a[i];
       for(int i=0;i<n;i++) cin>>b[i];
       sort(a,a+n);
       sort(b,b+n);
       int flag=0;
       for(int i=0;i<n;i++)
       {
           if((a[i]==b[i]) || (a[i]+1==b[i])) continue;
           else
           {
               flag=1;
               break;
           }
       }
       if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
}