#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        while(v[i]>0)
        {
            int rem=v[i]%10;
            v[i]=v[i]/10;
            if(rem==4 || rem==7)
            count++;
        }
        if(count<=k)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}