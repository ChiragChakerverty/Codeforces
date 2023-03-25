#include<bits/stdc++.h>

using namespace std;

// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

int main()
{
    long long int t; cin>>t;
    while(t--)
    {
        long long int n,k; cin>>n>>k;
        vector<long long int> a(n);
        vector<long long int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<k;i++)
        { 
            if(a[i]<b[i])
            {   
                swap(a[i],b[i]);
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++) sum=sum+a[i];
        cout<<sum<<endl;
    }
    return 0;
}