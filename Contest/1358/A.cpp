#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int prod=n*m;
        if(n==1 && m==1) prod=2;
        if(prod%2) cout<<(prod/2)+1<<endl;
        else cout<<prod/2<<endl;
    }
}