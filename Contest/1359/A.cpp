#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,m,k; cin>>n>>m>>k;
        ll winner=0,runner_up=0;
        if(m<(n/k)) winner=m;
        else 
        {
            winner=n/k;
            runner_up=(m-(n/k))/(k-1);
            if((m-(n/k))%(k-1)!=0) runner_up++;
            winner=winner-runner_up;
        }
        cout<<winner<<endl;
    }
    return 0;
}