#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    int min=9999;
    int index1=0,index2=1;
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int diff=abs(v[i]-v[j]);
            if(diff<min)
            {   
               // cout<<"loop is running"<<endl;
                index1=i;
                index2=j;
                min=diff;
            }
            break;
        }
    }
    int a=abs(v[1]-v[n]);
   // cout<<v[1]<<" "<<v[n]<<endl;
   // cout<<v[n-1]<<endl;
   // cout<<a<<endl;
    if(min>a)
    {
    index1=n;
    index2=1;
    min=a;
    }
    cout<<index1<<" "<<index2<<endl;
    return 0;
}