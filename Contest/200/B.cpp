#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(arr[i]/100);
        //cout<<sum<<endl;
    }
    
    sum=sum/n;
    sum=sum*100;
    cout<<sum<<endl;
    return 0;
}