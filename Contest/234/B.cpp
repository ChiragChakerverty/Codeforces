#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{  
  freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,k; cin>>n>>k;
   int arr[n],copy[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      copy[i]=arr[i];
   }
   sort(copy,copy+n);
   int start=n-k;
   cout<<copy[start]<<endl;
   for(int i=start;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         if(arr[j]==copy[i])
         {
            cout<<j+1<<" ";
            arr[j]=-1;
            break;
         }
      }
   }
   return 0;
}