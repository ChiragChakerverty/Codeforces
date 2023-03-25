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
        int n,k;
        cin>>n>>k;
        int ans=0;
        int q=k/n;
        if(q==0)
        {   
            int incre=n/k;
            if(n%k!=0) k=(incre+1)*k;
            else if(n%k==0) k=incre*k;
            q=k/n;
        }
        if(n==1)
        {
            ans=k;
        }
        else if(k%n==0)
        {
            ans=q;
        }
        else if(q>=1)
        {
            ans=q+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}