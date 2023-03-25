#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

const ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int n; cin>>n;
       vector<int> v;
       if((n%3==0) || (n%3==2))
       {
           
           int sum=0;
           while(true)
           {
               v.push_back(2);
               sum=sum+2;
               if(sum==n) break;
               v.push_back(1);
               sum=sum+1;
               if(sum==n) break;
           }
       }
       else 
       {
           
           int sum=0;
           while(true)
           {
               v.push_back(1);
               sum=sum+1;
               if(sum==n) break;
               v.push_back(2);
               sum=sum+2;
               if(sum==n) break;
           }
       }
       for(int i=0;i<v.size();i++) cout<<v[i];
       cout<<endl;
    }
    return 0;
}