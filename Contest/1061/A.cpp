#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int coins=0;
    int ans=0;
    for(int i=n;i>0 || s!=0;i--)
    {   
        if(s>=i)
        {
        int coins=s/i;
        ans=ans+coins;
        int rem=s%i;
        while(rem>i)
        {
            rem=rem/i;
            ans=ans+rem;
        }
        s=s%i;}
    }
    cout<<ans<<endl;
    return 0;
}