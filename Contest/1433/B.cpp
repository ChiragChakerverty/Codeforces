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
        int count_0=0,count_1=0;
        for(int i=0;i<n;i++) 
        {
            if(arr[i]==1) count_1++;
        }
        if(count_1==1) cout<<0<<endl;
        else 
        {
            int start_index=0,end_index=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    start_index=i;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1) end_index=i;
            }
            for(int i=start_index;i<=end_index;i++)
            {
                if(arr[i]==0) count_0++;
            }
            cout<<count_0<<endl;
        }
    }
    return 0;
}