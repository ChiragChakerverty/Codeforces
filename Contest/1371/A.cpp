#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        unsigned long long int sum=((n*(n+1))/2);
        cout<<sum/n<<endl;
    }
    return 0;
}