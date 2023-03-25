#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


int main()
{
    int n; cin>>n;
    int ans=0;
    int x[n],y[n];
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
    {   
        int count1=0,count2=0,count3=0,count4=0;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            else
            {
                if(x[i]>x[j] && y[i]==y[j]) count1=1;
                if(x[i]<x[j] && y[i]==y[j]) count2=1;
                if(x[i]==x[j] && y[i]>y[j]) count3=1;
                if(x[i]==x[j] && y[j]>y[i]) count4=1;
            }
        }
        if(count1+count2+count3+count4==4) ans++;
    }
    cout<<ans<<endl;
    return 0;
}