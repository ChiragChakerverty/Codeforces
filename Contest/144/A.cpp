#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int posmax,posmin;
    int max,min;
    max=-1;
    min=99999;
    int ans;
    for(int i=0;i<n;i++)
    {   
        if(arr[i]>max)
        {
            max=arr[i];
            posmax=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            posmin=i;
        }
    }
    // cout<<posmax<<" "<<posmin<<endl;
    if(posmax>posmin)
    {
        ans=(posmax-0)+abs(posmin-(n-1))-1;
    }
    else  
    ans=(posmax-0)+abs(posmin-(n-1));
    cout<<ans<<endl;
    return 0;
}