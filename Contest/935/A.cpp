#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{   
    ll n; cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0) ans++;
    }
    cout<<ans<<endl;
    return 0;
}