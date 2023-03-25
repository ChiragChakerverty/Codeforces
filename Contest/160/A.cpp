#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int sum=0,sum1=0;
    int count=1;
    for(int i=0;i<n;i++) sum=sum+v[i];
    for(int i=n-1;i>=0;i--)
    {
        sum1=sum1+v[i];
        sum=sum-v[i];
        if(sum<sum1) break;
        else count++;
    }
    cout<<count<<endl;
    return 0;
}