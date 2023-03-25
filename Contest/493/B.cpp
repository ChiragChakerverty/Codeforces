#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
 
const ll mod = 1e9 + 7;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   int arr[n];
   vector<int> pos;
   vector<int> neg;
   ll pos_sum=0,neg_sum=0;
   for(int i=0;i<n;i++)
   {
      int x; cin>>x;
      arr[i]=x;
      if(x>=0)
      {
         pos.push_back(x);
         pos_sum=pos_sum+x;
      }
      else
      {
         neg.push_back((-1)*x);
         neg_sum=neg_sum+(-1*x);
      }
   }
   if(pos_sum>neg_sum) cout<<"first"<<endl;
   else if(neg_sum>pos_sum) cout<<"second"<<endl;
   else 
   {
      int flag=0;
      int mini=min(pos.size(),neg.size());
      for(int i=0;i<mini;i++)
      {
         if(pos[i]>neg[i])
         {
            cout<<"first"<<endl;
            return 0;
         }
         else if(neg[i]>pos[i])
         {
            cout<<"second"<<endl;
            return 0;
         }
         else flag=1;
      }
      if(flag==1)
      {
         if(arr[n-1]>0) cout<<"first"<<endl;
         else cout<<"second"<<endl;
      }
   }
   return 0;
}