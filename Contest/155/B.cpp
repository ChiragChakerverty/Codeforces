#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
bool cmp(pair <int,int> a, pair <int,int> b)
{
 
    if (a.second != b.second)
    {
        return a.second>b.second;
    }
    else
    {
       return a.first>b.first;
    }
    
    
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
   int n;
   cin>>n;
 
   pair <int,int> arr[n];
 
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i].first;
       cin>>arr[i].second;
   }
   sort(arr,arr+n,cmp);
 
  
   
  int count = 1;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
      if (count == 0)
      {
          break;
      }
      count--;
      count += arr[i].second;
      sum += arr[i].first;
      
  }
  
   cout<<sum<<endl;
   
 
    return 0;
}