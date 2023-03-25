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
       int n,m; cin>>n>>m;
       if(n==1 && m==1) cout<<0<<endl;
       else if(n==1 || m==1) cout<<1<<endl;
       else if(n>=2 && m>=2) cout<<2<<endl;
    }
    return 0;
}