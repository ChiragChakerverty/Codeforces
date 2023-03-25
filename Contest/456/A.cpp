#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int n; cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
    sort(arr,arr+n);
    int flag=10;
    int max=arr[0].second;
    for(int i=1;i<n;i++)
    {
        if(arr[i].second>max) max=arr[i].second;
        else 
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;
}