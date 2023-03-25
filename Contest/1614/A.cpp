#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
       int count=0;
       int n,l,r,k;
       cin>>n>>l>>r>>k;
       vector<int> v(n);
       for(int i=0;i<n;i++) cin>>v[i];
       sort(v.begin(),v.end());
       
       for(auto i=v.begin();i!=v.end();)
       {
           if(*i<l)
           v.erase(i);
           else if(*i>r)
           v.erase(i);
           else i++;
       }
       int a=v.size();
       int sum=0;
       for(int i=0;i<v.size();i++)
       {
           sum=sum+v[i];
           if(sum>k)
           break;
           count++;
       }
       cout<<count<<endl;
 
    }
    return 0;
}