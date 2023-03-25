#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=d) count++;
        }
        if(count==n) cout<<"YES"<<endl;
        else
        {
            if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}