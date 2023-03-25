#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n,c; cin>>n>>c;
    int profit=0;
    int max_profit=0;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        profit=arr[i]-(arr[i+1]+c);
        if(profit>max_profit) max_profit=profit;
    }
    cout<<max_profit<<endl;
    return 0;
}