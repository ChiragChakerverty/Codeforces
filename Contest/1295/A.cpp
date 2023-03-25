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
        int n; cin>>n;
        if(n%2==0)
        {
            ll rem=n/2;
            while(rem--) cout<<1;
            cout<<endl;
        }
        else if(n%2)
        {   
            n=n-3;
            ll rem=n/2;
            cout<<7;
            while(rem--) cout<<1;
            cout<<endl;
        }
    }
    return 0;
}