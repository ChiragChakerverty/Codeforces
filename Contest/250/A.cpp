#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
 
int increment(int n)
{
   n++;
   return n;
}
const ll mod = 1e9 + 7;
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   int arr[n];
   int neg=0;
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      if(arr[i]<0) neg++;
   }
   int folders=0;
   if(neg==0) folders++;
   else folders=ceil(neg/2.0);
   cout<<folders<<endl;
   int elements=0;
   while(folders--)
   {
      if(folders==0)
      {
         cout<<n-elements; return 0;
      }
      int a=0; int count=0;
      int i;
      for(i=elements;i<n;i++)
      {
         if(arr[i]<0) a++;
         count++;
         if(a==2) break;
      }
      elements=elements+count;
      //cout<<"elements="<<elements<<" ";
      cout<<count<<" ";
   }
   return 0;
}