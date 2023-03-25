#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    int x,y,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
                break;
            }
            
        }
    }
    int ans;
    ans=abs(x-2)+abs(y-2);
    cout<<ans<<endl;

    return 0;
}