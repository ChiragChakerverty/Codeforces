#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n; cin>>n;
    string s[n];
    int index1=0,index2=0;
    for(int i=0;i<n;i++) cin>>s[i];
    int flag=2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(s[i].substr(j,2)=="OO")
            {
                flag=0;
                cout<<"YES"<<endl;
                index1=i; index2=j;
                break;
            }
            
        }
        if(flag==0) break;
    }
    if(flag==2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    s[index1][index2]='+';
    s[index1][index2+1]='+';
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}