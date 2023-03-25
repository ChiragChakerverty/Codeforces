#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) cin>>arr[i][j];
        }
        int rows=0,columns=0;
        int a=0,b=0;
        while(a<n)
        {   
            int flag=0;
            for(int i=0;i<m;i++)
            {
                if(arr[a][i]==1)
                {
                    flag=1;
                    break; 
                }
            }
            if(flag==0) rows++;
            a++;
        }
        while(b<m)
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i][b]==1)
                {
                    flag=1;
                    break; 
                }
            }
            if(flag==0) columns++;
            b++;
        }
        int ans=min(rows,columns);
        if(ans%2) cout<<"Ashish"<<endl;
        else cout<<"Vivek"<<endl;
    }
    return 0;
}