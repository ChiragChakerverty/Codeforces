#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m; cin>>n>>m;
    long long int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];
    long long int tasks=arr[0]-1;
    for(int i=1;i<m;i++)
    {
        if(arr[i]>=arr[i-1]) tasks=tasks+(arr[i]-arr[i-1]);
        else tasks=tasks+(n-arr[i-1])+(arr[i]);
    }
    cout<<tasks<<endl;
    return 0;
}