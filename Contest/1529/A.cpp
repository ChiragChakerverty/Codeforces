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
        int min=*min_element(arr,arr+n);
        int freq=count(arr,arr+n,min);
        cout<<n-freq<<endl;
    }
    return 0;
}