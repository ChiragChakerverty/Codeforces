#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum1=sum1+arr[i];
    }
    int b[n-1],sum2=0;

    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
        sum2=sum2+b[i];
    }
    int c[n-2],sum3=0;
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
        sum3=sum3+c[i];
    }
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
    return 0;
}