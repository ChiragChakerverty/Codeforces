#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        unsigned long long int n,k; cin>>n>>k;
        unsigned long long int sum=n;
        if(n%2==0) sum=sum+2*k;
        else 
        {
            for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                    break;
                }
            }
            sum=sum+(2*(k-1));
        }
        cout<<sum<<endl;
    }
    return 0;
}