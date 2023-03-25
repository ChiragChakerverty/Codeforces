#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n; cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++) cin>>arr[i];
        ll low=0,high=n-1;
        while(low<high)
        {
            if(arr[low]>0 && arr[high]<0)
            {
                arr[low]=arr[low]*(-1);
                arr[high]=arr[high]*(-1);
                low++;
                high--;
            } 

            if(arr[low]<0) low++;
            if(arr[high]>0) high--;
        }
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1]) continue;
            else 
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}