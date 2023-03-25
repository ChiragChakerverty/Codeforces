#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) arr[i][j]='#';
    }
    for(int i=1;i<n;i=i+4)
    {
        for(int j=0;j<m-1;j++) arr[i][j]='.';
    }
    if(n>3)
    {
        for(int i=3;i<n;i=i+4)
        {
            for(int j=1;j<m;j++) arr[i][j]='.';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}