#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a,a_max=-1,a_min=999,b,b_max=-1,b_min=999;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='*')
            {
                a=i;
                b=j;
                if(a_min>i)
                a_min=i;
                if(a_max<i)
                a_max=i;
                if(b_min>j)
                b_min=j;
                if(b_max<j)
                b_max=j;
            }
        }
    }
   // cout<<a<<" "<<b<<" "<<a_max<<" "<<a_min<<" "<<b_min<<" "<<b_max<<endl;
    
    for(int i=a_min;i<=a_max;i++)
    {
        for(int j=b_min;j<=b_max;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}