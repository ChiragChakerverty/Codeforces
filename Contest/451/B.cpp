#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int n; cin>>n;
    int arr[n],copy[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        copy[i]=arr[i];
    }
    sort(copy,copy+n);
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(copy[i]!=arr[i])
        {
            count=0; break;
        }
    }
    if(count==1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }

    int l=0,r=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            l=i; break;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i-1]>arr[i])
        {
            r=i;
            break;
        }
    }
    //cout<<l<<" "<<r<<endl;
    int counter=r-l+1;
    int rev[counter];
    for(int i=l,j=0;j<counter;i++,j++) rev[j]=arr[i];
    reverse(rev,rev+counter);
    int ans[n];
    //for(int i=l;i<=r;i++) cout<<rev[i]<<" ";
    //cout<<endl;
    for(int i=0;i<l;i++) ans[i]=arr[i];
    for(int i=l,j=0;i<=r;i++,j++) ans[i]=rev[j];
    for(int i=r+1;i<n;i++) ans[i]=arr[i];
    sort(arr,arr+n);
    int flag=1;
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    //cout<<endl;
    //for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    //cout<<endl;
        
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=ans[i])
        {
            flag=0; break;
        }
    }
    if(flag==0) cout<<"no"<<endl;
    else 
    {
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}