#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m; cin>>n>>m;
   char arr[n][m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++) cin>>arr[i][j];
   }
   int ans=0;
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if(arr[i][j]=='W')
         {
            if(i!=n-1 && arr[i+1][j]=='P')
            {
               ans++;
               arr[i][j]='.';
               arr[i+1][j]='.';
            }
            else if(i!=0 && arr[i-1][j]=='P')
            {
               ans++;
               arr[i][j]='.';
               arr[i-1][j]='.';
            }
            else if(j!=0 && arr[i][j-1]=='P')
            {
               ans++;
               arr[i][j-1]='.';
               arr[i][j]='.';
            }
            else if(j!=m-1 && arr[i][j+1]=='P')
            {
               ans++;
               arr[i][j]='.';
               arr[i][j+1]='.';
            }
         }
      }
   }
   cout<<ans<<endl;
   return 0;
}