#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll r,x,y,x1,y1; cin>>r>>x>>y>>x1>>y1;
    ll d=(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
    ll ans=ceil(sqrt(d)/(2.0*r));
    cout<<ans<<endl;
}