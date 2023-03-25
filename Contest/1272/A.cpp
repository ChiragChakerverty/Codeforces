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
        ll arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        sort(arr,arr+3);
        ll ans1=(arr[1]-arr[0])+(arr[2]-arr[1])+(arr[2]-arr[0]);
        arr[0]=arr[0]+1;
        arr[2]=arr[2]-1;
        ll ans2=(arr[1]-arr[0])+(arr[2]-arr[1])+(arr[2]-arr[0]);
        ll ans=min(ans1,ans2);
        if(ans<0) ans=0;
        cout<<ans<<endl;

    }
    return 0;
}