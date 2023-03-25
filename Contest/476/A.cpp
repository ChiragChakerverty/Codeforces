#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int flag=10;
    int a=ceil(n/2.0);
    for(int i=a;i<=n;i++)
    {
        if(i%m==0)
        {
            cout<<i<<endl;
            flag=0;
            break;
        }
    }
    if(flag==10) cout<<-1<<endl;
}