#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int a,b,c; cin>>a>>b>>c;
        long long int n=2*abs(a-b);
        if((a>=1 && a<=n) && (b>=1 && b<=n) && (c>=1 && c<=n))
        {
            long long int d=c+(n/2);
            long long int e=c-(n/2);
            if(d>=1 && d<=n) cout<<d<<endl;
            else if(e>=1 && e<=n) cout<<e<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}