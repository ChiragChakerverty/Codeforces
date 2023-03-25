#include <bits/stdc++.h>
 
using namespace std;

#define endl '\n'

typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;
 
int main()
{
    int a,n; cin>>n>>a;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int d=min(a-1,n-a);
    //cout<<d<<endl;
    vector<int> left,right;
    int copy=d;
    int copy2=d;
    int x=a-1;
    while(d--)
    {
        left.push_back(arr[x]);
        x--;
    }
    int y=a+1;
    while(copy--)
    {
        right.push_back(arr[y]);
        y++;
    }
    // for(int i=0;i<left.size();i++) cout<<left[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<right.size();i++) cout<<right[i]<<" ";
    // cout<<endl;
    int ans=0;
    if(arr[a]==1) ans++;
    for(int i=0;i<copy2;i++)
    {
        if(left[i]+right[i]==2) ans=ans+2; 
        else continue; 
    }
    for(int i=1;i<a-copy2;i++)
    {
        if(arr[i]==1) ans++;
    }
    for(int i=a+copy2+1;i<=n;i++)
    {
        if(arr[i]==1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}