#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1000003;



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m,d; cin>>n>>m>>d;
   int x=m*n;
   int arr[x+1];
   for(int i=1;i<=x;i++) cin>>arr[i];
   sort(arr+1,arr+x+1);
   int moves=0;
   if(x%2)
   {
      int head=arr[(x/2)+1];
      for(int i=1;i<=(x/2);i++)
      {
         while(arr[i]<head)
         {
            arr[i]=arr[i]+d;
            moves++;
         }
      }
      for(int i=(x/2)+1;i<=x;i++)
      {
         while(arr[i]>head)
         {
            arr[i]=arr[i]-d;
            moves++;
         }
      }
   } 
   else 
   {
      int head=arr[x/2];
      for(int i=1;i<=x/2;i++)
      {
         while(arr[i]<head)
         {
            arr[i]=arr[i]+d;
            moves++;
         }
      }
      for(int i=(x/2+1);i<=x;i++)
      {
         while(arr[i]>head)
         {
            arr[i]=arr[i]-d;
            moves++;
         }
      }
   }
   set<int> s(arr+1,arr+x+1);
   
   if(s.size()==1) cout<<moves<<endl;
   else cout<<-1<<endl;
   return 0;
}