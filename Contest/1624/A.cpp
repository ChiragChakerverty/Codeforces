#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<arr[n-1]-arr[0]<<endl;
    }
    return 0;

}