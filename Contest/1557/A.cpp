#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
       sort(arr,arr+n);
       double sum=0;
       for(int i=0;i<n-1;i++) sum=sum+arr[i];
       cout<<fixed<<setprecision(10)<<((sum/(n-1))+arr[n-1])<<endl;

    }
    return 0;
}