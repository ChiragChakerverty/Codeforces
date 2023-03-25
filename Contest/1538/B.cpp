#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int k=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        int sum=accumulate(arr,arr+n,0);
        if(sum%n!=0) cout<<-1<<endl;
        else 
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>(sum/n)) k++;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}