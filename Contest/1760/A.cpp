#include <bits/stdc++.h>
using namespace std;
 
#define Chirag ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
 
#define int long long
 
const ll mod = 1e9 + 7;
 
int32_t main()
{
   Chirag
   ll t;
   cin >> t;
   while(t--)
   {
      int arr[3];
      for(int i=0;i<3;i++) cin>>arr[i];
      sort(arr,arr+3);
      cout<<arr[1]<<endl;
      
   }
   return 0;
}