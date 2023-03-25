#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k; cin>>k;
    int arr[12];
    for(int i=0;i<12;i++) cin>>arr[i];
    if(k==0) cout<<0<<endl;
    else {
    int count=0;
    int sum=0;
    sort(arr,arr+12);
    reverse(arr,arr+12);
    for(int i=0;i<12;i++)
    {
        sum=sum+arr[i];
        count++;
        if(sum>=k) break;
    }
    if(sum>=k)
    cout<<count<<endl;
    else cout<<-1<<endl;}
    return 0;

}