#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        long long int need=0,sum=0,flag=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            need=need+i;
            if(sum<need) 
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        } 
        if(flag==1) cout<<"YES"<<endl;
    }
    return 0;
}