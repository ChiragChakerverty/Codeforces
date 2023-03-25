#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int min=9999;
    int index=0;
    for(int i=0;i<n-2;i++)
    {
        if(v[i+2]-v[i]<min)
        {
            min=v[i+2]-v[i];
            index=i+1;
        }
    }
    v.erase(v.begin()+index);
    int ans=0;
    for(int i=1;i<n;i++)
    {
        ans=max(ans,v[i]-v[i-1]);
    }
    cout<<ans;
    return 0;
}