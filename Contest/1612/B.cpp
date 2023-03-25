#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


const ll mod=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
       int n,a,b; cin>>n>>a>>b;
       int arr[n+1];
       int count_small=0,count_large=0;
       for(int i=1;i<n+1;i++)
       {
           arr[i]=i;
           if(i>a && i!=b) count_small++;
           if(i<b && i!=a) count_large++;
       }
       if(count_small>=(n/2-1) && count_large>=(n/2-1))
       {
           for(int i=n;i>(n/2+1);i--)
           {    
               if(i!=a && i!=b) cout<<arr[i]<<" ";
           }
           cout<<a<<" ";
           for(int i=(n/2+1);i>=1;i--)
           {    
               if(i!=b && i!=a) cout<<arr[i]<<" ";
           }
           cout<<b<<" ";
           cout<<endl;

       }
       else cout<<-1<<endl; 
    }
    return 0;
}