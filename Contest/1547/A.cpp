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
        int xa,ya; cin>>ya>>xa;
        int xb,yb; cin>>yb>>xb;
        int xf,yf; cin>>yf>>xf;
        int ans=0;
        ans=abs(xa-xb)+abs(ya-yb);
        if((xa==xb && xa==xf && (yf>min(ya,yb) && yf<max(ya,yb))) || (ya==yb && ya==yf && (xf>min(xa,xb) && xf<max(xa,xb)))) ans=ans+2;
        cout<<ans<<endl;
    }
    return 0;
}