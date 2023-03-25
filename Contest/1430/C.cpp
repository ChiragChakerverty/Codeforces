#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

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
       ll n; cin>>n;
       cout<<2<<endl;
       ll loop=n-2;
       int a=n,b=n-1;
       cout<<a<<" "<<b<<endl;
       while(loop--)
       {
            ll lessgo=ceil((a+b)/2.0);
            a=lessgo;
            b--;
            cout<<a<<" "<<b<<endl;
       }
    }
    return 0;
}