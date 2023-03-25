#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m; cin>>n>>m;
    long long int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {   
        if(arr[i]<=0)
        sum=sum+abs(arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}