#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
  int n;
  cin>>n;
 
  double arr[n];
 
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
 double sum = 0;
  if (n % 2 == 0)
  {
      
     
      for (int i = 1; i < n; i++)
      {
          if (i % 2 != 0)
          {
              sum += (arr[i]*arr[i]*3.1415926536) - (arr[i-1]*arr[i-1]*3.1415926536);
          }
 
          
      }
      
  }
  else
  {
      sum += (arr[0]*arr[0]*3.1415926536);
      for (int i = 2; i < n; i++)
      {
         if (i % 2 == 0)
          {
              sum += (arr[i]*arr[i]*3.1415926536) - (arr[i-1]*arr[i-1]*3.1415926536);
          }
      }
      
  }
  
  cout<<setprecision(14)<<sum<<endl;
  
 
    return 0;
}