#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans;
    for(int i=n+1;i<=m;i++)
    {   
        int count=1;
        int divisor=2;
        while(divisor<=i)
        {
            if(i%divisor==0)
            count++;
            divisor++;
        }
       // cout<<count<<endl;
        if(count==2)
        {
            ans=i;
            break;
        }
    }
   // cout<<ans<<endl;
    if(ans==m)
    cout<<"YES";
    else  
    cout<<"NO";
    return 0;
}