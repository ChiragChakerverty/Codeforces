#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
       int x1,p1; cin>>x1>>p1;
       int x2,p2; cin>>x2>>p2;
       int dig1=floor(log10(x1))+1;
       int dig2=floor(log10(x2))+1;
       if(dig1+p1>dig2+p2) cout<<">"<<endl;
       else if(dig1+p1<dig2+p2) cout<<"<"<<endl;
       else 
       {
           if(dig1>dig2)
           {
               x2=x2*pow(10,(dig1-dig2));
           }
           else if(dig2>dig1)
           {
               x1=x1*pow(10,(dig2-dig1));
           }
          // cout<<x1<<" "<<x2<<" ";
           if(x1>x2) cout<<">"<<endl;
           else if(x2>x1) cout<<"<"<<endl;
           else cout<<"="<<endl;
       }
    }
    return 0;
}