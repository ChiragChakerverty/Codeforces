#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        ll ans=0;
        if(k%2==0)
        {
            ans=(a*(k/2))-(b*(k/2));
        }
        else 
        {
            ans=(a*((k/2)+1)-b*(k/2));
        }
        cout<<ans<<endl;
    }
    return 0;
}