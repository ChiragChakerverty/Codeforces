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
       ll n,k; cin>>n>>k;
       if(k*k>n)
       {
           cout<<"NO"<<endl;
           continue; 
       }
       else if((k%2)!=(n%2))
       {
           cout<<"NO"<<endl;
           continue; 
       }
       else cout<<"YES"<<endl;
    }
    return 0;
}