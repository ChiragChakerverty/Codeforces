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
      ll a,b; cin>>a>>b; 
      cout<<min(a,min(b,((a+b)/3)))<<endl;
    }
    return 0;
}