#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int t; cin>>t;
    vector<int> v;
    int arr[n-1];
    for(int i=1;i<=n-1;i++) cin>>arr[i];
    int pos=1;
    for(int i=1;i<=n-1;)
    {
        pos=pos+arr[i];
        i=i+arr[i];
        v.push_back(pos);
    }
    auto it=find(v.begin(),v.end(),t);
    if(it==v.end()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}