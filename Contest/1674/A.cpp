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
       int x,y; cin>>x>>y;
       int integer1=0,integer2=0;
       if(y%x!=0)
       {    
           //cout<<"haha"<<endl;
           cout<<0<<" "<<0<<endl;
           continue;
       }
       else 
       {
           for(int b=1;b<=100;b++)
           {
               int a=100;
               int prod=x;
               while(a--)
               {
                   prod=b*prod;
                   if(prod>=y) break;
               }
               if(prod==y)
               {
                   integer1=100-a;
                   integer2=b;
                   break;
               }
           }
           cout<<integer1<<" "<<integer2<<endl;
       }
    }
    return 0;
}