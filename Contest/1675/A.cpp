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
       ll a,b,c,x,y; cin>>a>>b>>c>>x>>y;
       if(a>=x && b>=y) cout<<"YES"<<endl;
       else if(c>=(x+y)) cout<<"YES"<<endl;
       else if(a>=x && b<y)
       {
           y=y-b;
           if(c>=y) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
       else if(b>=y && a<x)
       {
           x=x-a;
           if(c>=x) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
       else 
       {
           x=x-a;
           y=y-b;
           if(c>=(x+y)) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
    }
    return 0;
}