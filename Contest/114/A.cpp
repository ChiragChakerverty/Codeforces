#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    ull k,l; cin>>k>>l;
    ll count=0;
    ull prod=1;
    while(prod<l)
    {
        prod=prod*k;
        count++;
       // cout<<count<<" ";
    }
    if(prod==l) 
    {
        cout<<"YES"<<endl;
        cout<<count-1<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}