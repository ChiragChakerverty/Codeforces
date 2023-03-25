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
    while(t--)
    {
       int n; cin>>n;
       int arr[n];
       int count=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           count=count+arr[i];
       }
       count=count-n;
       if(count%2) cout<<"errorgorn"<<endl;
       else cout<<"maomao90"<<endl;
    }
    return 0;
}