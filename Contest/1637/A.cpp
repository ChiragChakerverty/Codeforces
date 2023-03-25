#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n],copy[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            copy[i]=arr[i];
        }
        sort(arr,arr+n);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=copy[i])
            {
                flag=1; break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}