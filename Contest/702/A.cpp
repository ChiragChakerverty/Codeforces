#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    long int count=1;
    long int max=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]) count++;
        else count=1;
        if(count>max) max=count;
        
    }
    cout<<max<<endl;
    return 0;
}