#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    long long int arr[n];
    long long int sum=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]+sum<<" ";
        if(arr[i]>0) sum=sum+arr[i];
    }
    return 0;
}