#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n,m,i,j; cin>>n>>m>>i>>j;
        long long int x1,y1,x2,y2;
        if(i==1 && j==1) cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
        else if(i==1 && j==m) cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        else if(i==n && j==1) cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
        else if(i==n && j==m) cout<<1<<" "<<m<<" "<<n<<" "<<1<<endl;
        else
        {
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }
    }
    return 0;
}