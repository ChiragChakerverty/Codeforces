#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) arr[i]=i+1;
        if(n%2==0)
        {
            for(int i=0;i<n;i=i+2) swap(arr[i],arr[i+1]);
           
        }
        else 
        {
            for(int i=0;i<n-1;i=i+2) swap(arr[i],arr[i+1]);
            if(arr[n-1]==n) swap(arr[n-1],arr[n-2]);
        }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}