#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
 
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
       ll a,b,c; cin>>a>>b>>c;
       ll arr[3];
       arr[2]=c;
       arr[1]=arr[2]+b;
       arr[0]=arr[1]+a;
       cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    return 0;
}