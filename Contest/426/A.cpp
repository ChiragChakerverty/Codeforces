#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    if(sum<=s) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
    
}