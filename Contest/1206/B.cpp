#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n; cin>>n;
    long long int arr[n],k=0,coins=0,count1=0,count2=0;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        if(arr[i]==0) k++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            coins=coins+arr[i]-1;
            count1++;
        }
        else if(arr[i]<0)
        {
            coins=coins-arr[i]-1;
            count2++;
        }
    }
    if(k>0) coins=coins+k;
    else if(k==0)
    {
        if(count2%2) coins=coins+2;
    }
    cout<<coins<<endl;
    return 0;
}