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
        ll t=ceil((n+3)/3.0);
        ll a=t-1,b=t,c=n+1-(2*t);
        if(c==0) 
        {
            c++;
            a--;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}