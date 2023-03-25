#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d; cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;
    int jokes=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i]+10;
    }
    sum=sum-10;
    if(sum>d) cout<<-1<<endl;
    else 
    {   
        int arr_sum=0;
        for(int i=0;i<n;i++)
        {
            arr_sum=arr_sum+arr[i];
        }
        cout<<(d-arr_sum)/5<<endl;
    }
    return 0;
}