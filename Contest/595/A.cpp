#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count=0;
    while(n--)
    {
        int arr[2*m];
        for(int i=0;i<2*m;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<2*m;i=i+2)
        {
            if(arr[i]+arr[i+1]>=1)
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}