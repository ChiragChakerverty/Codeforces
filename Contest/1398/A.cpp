#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        long long int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        if(arr[1]+arr[2]<=arr[n])
        {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}