#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   int n;
   cin>>n;
 
   int arr[n];
   
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  if (n<3)
  {
        cout<<n<<endl;
        return 0;
  }
  int max = 0;
  
   for (int i = 2; i < n; i++)
   {
       
       int count = 0;
       while (i<n && arr[i] == arr[i-1] + arr[i-2])
       {
           count++;
           i++;
       }
       if (max<count)
       {
           max = count;
       }
       
       
 
   }
   cout<<max+2<<endl;
 
 
    return 0;
}