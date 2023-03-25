#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,d; cin>>a>>b>>c>>d;
        if(b>=a) cout<<b<<endl;
        else if(d>=c) cout<<-1<<endl;
        else 
        {
            unsigned long long int rest=c-d;
            a=a-b;
            unsigned long long int count=0;
            if(a%rest==0) count=a/rest;
            else count=(a/rest)+1;
            unsigned long long int min=b+count*c;
            cout<<min<<endl;
        }
    }
    return 0;
}