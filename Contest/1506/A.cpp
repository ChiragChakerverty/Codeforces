#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n,m,x; cin>>n>>m>>x;
        int r=((x-1)%n)+1;
        int c=ceil((x/float(n)));
        cout<<((r-1)*m)+c<<endl;
    }
    return 0;
}