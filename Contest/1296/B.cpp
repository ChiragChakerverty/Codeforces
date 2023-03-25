#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        unsigned long long int s; cin>>s;
        unsigned long long int sum=0;
        while(s>0)
        {
            long long int rem=s%10;
            long long int quotient=s/10;
            sum=sum+quotient*10;
            s=s/10+rem;
            if(s<=9 ) break;
        }
        cout<<sum+s<<endl;
    }
    return 0;
}