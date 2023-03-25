#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        long long int n; cin>>n;
        sort(arr,arr+3);
        int a=(arr[2]-arr[1])+(arr[2]-arr[0]);
        if(a>n) cout<<"NO"<<endl;
        else if(a==n) cout<<"YES"<<endl;
        else 
        {
            n=n-a;
            if(n%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}