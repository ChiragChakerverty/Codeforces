#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,k; cin>>n>>m>>k;
        if((n*m)-1==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}