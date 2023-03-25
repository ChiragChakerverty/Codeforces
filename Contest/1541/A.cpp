#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        if(n%2==0)
        {
            for(int i=1;i<=n;i=i+2)
            {
                swap(arr[i],arr[i+1]);
            }
        }
        else 
        {
            for(int i=1;i<n;i=i+2) swap(arr[i],arr[i+1]);
            swap(arr[n-1],arr[n]);
        }
        for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}