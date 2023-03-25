#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {   
        unsigned long long int arr[7];
        for(int i=0;i<7;i++) cin>>arr[i];
        unsigned long long int a1,a2,a3;
        a1=arr[6]-arr[3];
        a2=arr[6]-arr[4];
        a3=arr[6]-arr[5];
        if((a1+a2+a3)!=arr[6]) a1=arr[6]-arr[2];
        cout<<a1<<" "<<a3<<" "<<a2<<endl;
    }
    return 0;
}