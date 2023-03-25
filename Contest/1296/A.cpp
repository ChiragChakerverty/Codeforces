#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        int count_1=0,count_2=0;
        if(sum%2) cout<<"YES"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]%2) count_1++;
                if(arr[i]%2==0) count_2++;
            }
            if(count_1>0 && count_2>0) cout<<"YES"<<endl;
        else if(count_1<1 || count_2<1)  cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}