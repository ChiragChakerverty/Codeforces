#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll r,b,d; cin>>r>>b>>d;
        ll limiting=min(r,b);
        ll red=r,blue=b;
        r=r-limiting;
        b=b-limiting;
        if(b==0)
        {
            if(r%blue==0) r=r/blue;
            else if(r%blue!=0) r=(r/blue)+1;
            if(r>d) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else if(r==0)
        {
            if(b%red==0) b=b/red;
            else if(b%red!=0) b=(b/red)+1;
            if(b>d) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}