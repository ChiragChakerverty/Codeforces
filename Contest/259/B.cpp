#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll arr[3][3];
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         cin>>arr[i][j];
      }
   }
   arr[2][2]=(arr[0][1]+arr[0][2]+arr[1][0]+arr[1][2]-arr[2][0]-arr[2][1])/2;
   arr[0][0]=(arr[1][0]+arr[1][2]+arr[2][0]+arr[2][1]-arr[0][1]-arr[0][2])/2;
   arr[1][1]=(arr[0][1]+arr[0][2]+arr[2][0]+arr[2][1]-arr[1][0]-arr[1][2])/2;
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }

   return 0;
}