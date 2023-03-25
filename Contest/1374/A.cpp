#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t; cin>>t;
    while(t--)
    {
        long long int x,y,n; cin>>x>>y>>n;
        long long int a=n/x;
        if((a*x)+y>n) cout<<(a-1)*x+y<<endl;
        else cout<<(a*x)+y<<endl;
    }
    return 0;
}