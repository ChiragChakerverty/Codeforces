#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,h; cin>>n>>h;
    vector<long long int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>h)
        count=count+2;
        else count=count+1;
    }
    cout<<count<<endl;
    return 0;
}