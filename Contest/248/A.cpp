#include<bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    cin>>n;
    int a=n;
    int l,r;
    int l_sum=0,r_sum=0;
    int ans=0;
    float x=n/2;
    while(a--)
    {
        cin>>l>>r;
        l_sum=l_sum+l;
        r_sum=r_sum+r;
    }
    //cout<<l_sum<<" "<<r_sum<<endl;
    if(l_sum==0 && r_sum==0)
    {
        cout<<0;
        return 0;
    }
    else if(l_sum==n && r_sum==n)
    {
        cout<<0;
        return 0;
    }
    else if(l_sum==n && r_sum!=n)
    {
        if(r_sum>=x)
        {
            ans=n-r_sum;
        }
    }
    else if(r_sum==n && l_sum!=0)
    {
        if(l_sum>x)
        {
            ans=n-l_sum;
        }
    }
    else if(r_sum!=n && l_sum!=n)
    {   
       // cout<<"this loop is running"<<endl;
        int ans1,ans2;
        if(l_sum>x)
        ans1=n-l_sum;
        else 
        ans1=n-(n-l_sum);
        if(r_sum>x)
        ans2=n-r_sum;
        else  
        ans2=n-(n-r_sum);
        ans=ans1+ans2;
    }
    cout<<ans<<endl;
    return 0;
}