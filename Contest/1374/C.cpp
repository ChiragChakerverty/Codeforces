#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {   
        int ans=0;
        int count_1=0,count_2=0;
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0;i<s.size();i++)
        {
           if(s.substr(i,2)=="()")
           {
               s.erase(i,2);
               i=-1;
           }
        }
        cout<<s.size()/2<<endl;
    }
    return 0;
}