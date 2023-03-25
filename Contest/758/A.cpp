#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        sum=sum+v[n-1]-v[i];
    }
    cout<<sum<<endl;
    return 0;
}