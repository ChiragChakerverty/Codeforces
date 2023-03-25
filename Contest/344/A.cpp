#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=1;

    for(int i=0;i<n;i++)
    {   
        if(i==n-1)
        break;
        if(v[i]!=v[i+1])
        count++;
       // cout<<i<<" "<<count<<endl;
    }
    cout<<count<<endl;
    return 0;
}