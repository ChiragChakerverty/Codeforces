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
        for(int i=0;i<n;i++) arr[i]=arr[i]-min;
        int flag=2;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                if(arr[i]%2!=0) 
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==2) cout<<"YES"<<endl;
    }
    return 0;
}