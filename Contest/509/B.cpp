#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
  int n,k;
  cin>>n>>k;
 
  int arr[n];
 
  int max = 0;
  int min = INT_MAX;
 
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
      if (max<arr[i])
      {
          max = arr[i];
      }
      if (min>arr[i])
      {
          min = arr[i];
      }
      
      
  }
  
  if (max-min>k)
  {
      cout<<"NO"<<endl;
      return 0;
  }
  cout<<"YES"<<endl;
  for (int i = 0; i < n; i++)
  {
      
      int count = min;
      while (count--)
      {
          cout<<1<<" ";
      }
      int hehe = arr[i] - min;
      for (int j = 1; j <= hehe; j++)
      {
         cout<<j<<" ";
      }
      cout<<endl;
 
      
  }
  
  
 
  
  
  
 
 
    return 0;
}