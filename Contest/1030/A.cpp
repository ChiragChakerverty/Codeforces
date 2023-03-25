#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=accumulate(arr,arr+n,0);
    if(sum>=1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}