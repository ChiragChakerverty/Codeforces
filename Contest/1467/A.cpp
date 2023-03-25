#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        if(n==1) cout<<"9"<<endl;
        else if(n==2) cout<<"98"<<endl;
        else if(n==3) cout<<"989"<<endl;
        else 
        {
            cout<<"989";
            n=n-3;
            int quotient=n/10;
            string s="0123456789";
            while(quotient--) cout<<s;
            int rem=n%10;
            for(int i=0;i<rem;i++) cout<<s[i];
            cout<<endl;
        }
        
    }
    return 0;
}