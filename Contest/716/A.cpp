#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    int count=1;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<=c)
        count++;
        else 
        count=1; 
       // cout<<count<<" ";

    }
    cout<<endl;
    cout<<count<<endl;
}