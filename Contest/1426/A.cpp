#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int count=0;
        if(n==1 || n==2) cout<<1<<endl;
        else
        {
            n=n-2;
            count=1;
            while(n>0)
            {
                n=n-x;
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}