#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int arr[3];
    for(int i=0;i<3;i++) cin>>arr[i];
    sort(arr,arr+3);
    cout<<abs(arr[1]-arr[0])+abs(arr[2]-arr[1])<<endl;
    return 0; 
}