#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        cout<<0<<endl;
        else  
        {
        unsigned long long int first,second,third;
        first=p/a;
        second=p/b;
        third=p/c;
        a=a*(first+1);
        b=b*(second+1);
        c=c*(third+1);
        unsigned long long int x=a-p;
        unsigned long long int y=b-p;
        unsigned long long int z=c-p;
        unsigned long long int ans=min(x,min(y,z));
        cout<<ans<<endl;}
    }
    return 0;
}