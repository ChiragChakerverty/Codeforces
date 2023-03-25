#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int t; cin>>t;
    while(t--)
    {
        unsigned long long int n; cin>>n;
        unsigned long long int a[n];
        unsigned long long int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unsigned long long int moves=0;
        unsigned long long int min_a=a[0];
        unsigned long long int min_b=b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min_a) min_a=a[i];
            if(b[i]<min_b) min_b=b[i];
        }
        for(int i=0;i<n;i++)
        {
            int count_a=a[i]-min_a;
            int count_b=b[i]-min_b;
            int greater=max(count_a,count_b);
            moves=moves+greater;
        }
        cout<<moves<<endl;
    }
    return 0;
}