#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        int n=abs(x-y);
        int ans=0;
        if(n==0 || n==1) ans=x+y;
        else  
        {
            if(x>y)
            {
                ans=(2*y)+(2*n)-1;
            }
            else  
            {
                ans=(2*x)+(2*n)-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}