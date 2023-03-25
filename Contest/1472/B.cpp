#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int count1=0,count2=0;
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
            if(arr[i]==1) count1++;
            else count2++;
        }
        if(count1==0 && count2!=0)
        {
            if(count2%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(count1!=0 && count2==0)
        {
            if(count1%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else 
        {
            if(count2%2==0 && count1%2==0) cout<<"YES"<<endl;
            else if(count2%2==1 && count1%2==1) cout<<"NO"<<endl;
            else if(count2%2==0 && count1%2==1) cout<<"NO"<<endl;
            else if(count2%2==1 && count1%2==0) cout<<"YES"<<endl; 
        }
    }
    return 0;
}