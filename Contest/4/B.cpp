#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int d,sumtime; cin>>d>>sumtime;
   int min1[d],max1[d];
   for(int i=0;i<d;i++)
   {
      cin>>min1[i]>>max1[i];
   }
   int min_sum=accumulate(min1,min1+d,0);
   int max_sum=accumulate(max1,max1+d,0);
   if(max_sum<sumtime || min_sum>sumtime)
   {
      cout<<"NO"<<endl;
      return 0;
   }
   else 
   {
      cout<<"YES"<<endl;
      sumtime=sumtime-min_sum;
      for(int i=0;i<d;i++)
      {
         cout<<(min1[i]+min(sumtime,(max1[i]-min1[i])))<<" ";
         sumtime=sumtime-min(sumtime,(max1[i]-min1[i]));
      }
   }
   return 0;
}