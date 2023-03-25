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
        int replace=ceil(n/4.0);
        n=n-replace;
        while(n--) cout<<9;
        while(replace--) cout<<8;
        cout<<endl;
    }
    return 0;
}