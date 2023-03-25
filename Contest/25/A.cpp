#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    int arr[n];
    int count_even=0,count_odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0) count_even++;
        else count_odd++;
    }
    if(count_even>count_odd)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2) cout<<i+1<<endl;
        }
    }
    else for(int i=0;i<n;i++) if(arr[i]%2==0) cout<<i+1<<endl;
    return 0;
}