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
       int arr[n],copy[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           copy[i]=arr[i];
       }
       sort(copy,copy+n);
       int flag=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==copy[i]) flag++;
       }
       if(flag==n)
       {
           cout<<0<<endl;
           continue;
       }
       if(arr[0]==copy[0] || arr[n-1]==copy[n-1])
       {
         cout<<1<<endl;
         continue;
       }
       if(arr[0]==copy[n-1] && arr[n-1]==copy[0])
       {
           cout<<3<<endl;
           continue;
       }
       else cout<<2<<endl;
    }
    return 0;
}