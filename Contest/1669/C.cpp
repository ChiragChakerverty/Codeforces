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
       int even=0,odd=0;
       vector<int> v1,v2;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           if(arr[i]%2)
           {
               odd++;
               v1.push_back(i);
           }
           else
           {
               even++;
               v2.push_back(i);
           }
       }
       //cout<<odd<<" "<<even<<endl;
       if((even==n && odd==0) || (odd==n && even==0))
       {
           cout<<"YES"<<endl;
           continue; 
       }
       int flag1=0,flag2=0;
       for(int i=0;i<v1.size()-1;i++)
       {
           if((v1[i+1]-v1[i])!=2)
           {
               flag1=1;
               break;
           }
       }
       for(int i=0;i<v2.size()-1;i++)
       {
           if((v2[i+1]-v2[i])!=2)
           {
               flag2=1;
               break;
           }
       }
       if((flag1+flag2)==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}