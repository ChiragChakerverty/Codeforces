#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int bottom[n],left[m];
        for(int i=0;i<n;i++) cin>>bottom[i];
        for(int i=0;i<m;i++) cin>>left[i];
        int a=n+m;
       int arr[a];
        for(int i=0;i<n;i++) arr[i]=bottom[i];
        for(int i=n,j=0;i<a;i++,j++) arr[i]=left[j];
        set<int> s(arr,arr+a);
        cout<<a-s.size()<<endl;
    }
    return 0;
}