#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i][1]==arr[j][0]) count++;
            if(arr[i][0]==arr[j][1]) count++;
        }
    }
    cout<<count<<endl;
    return 0;
}