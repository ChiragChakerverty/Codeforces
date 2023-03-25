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
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    int rows=n,columns=m;
    int a=0,b=0;
    while(a<n)
    {   
        int count=0;
        for(int i=0;i<m;i++) 
        {
            if(arr[a][i]=='S')
            {
                count++;
                break;
            }
        }
        if(count>0) rows--;
        a++;
    }
    while(b<m)
    {
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i][b]=='S')
            {
                counter++;
                break;
            }
        }
        if(counter>0) columns--;
        b++;
    }
    // cout<<rows<<" "<<columns<<endl;
    int ans;
    if(rows==0) ans=columns*n;
    else if(columns==0) ans=rows*m;
    else if(rows==columns && ((rows+columns)==(m+n))) ans=rows*m;
    else ans=(rows*m)+(columns*n)-(rows*columns);
    cout<<ans<<endl;
    return 0;
}