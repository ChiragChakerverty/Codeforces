#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
#define int long long

const ll mod = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
       char arr[8][8];
       for(int i=0;i<8;i++)
       {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
       }
       int flag=0,ans1=0,ans2=0;
       for(int i=1;i<7;i++)
       {
            for(int j=1;j<7;j++)
            {
                if(arr[i][j]=='#')
                {
                    if(arr[i-1][j-1]=='#')
                    {
                        if(arr[i-1][j+1]=='#')
                        {
                            if(arr[i+1][j-1]=='#')
                            {
                                if(arr[i+1][j+1]=='#')
                                {
                                    ans1=i+1;
                                    ans2=j+1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
       }
       cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}