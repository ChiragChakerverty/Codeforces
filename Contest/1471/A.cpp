#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,x; cin>>n>>x;
        ll arr[n];
        ull sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        } 
        unsigned long long max=0,min=0;
        for(int i=0;i<n;i++)
        {
            max=max+(ull)ceil(arr[i]/(double(x)));
        }
        min=(ull)ceil(sum/(double(x)));
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}