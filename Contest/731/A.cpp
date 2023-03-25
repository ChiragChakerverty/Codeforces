#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    int a=abs(s[0]-'a');
    if(a>13) a=26-a;
    count=a;
   // cout<<count<<endl;
    for(int i=1;i<s.size();i++)
    {
        if(abs(s[i]-s[i-1])>13)
        count=count+26-abs(s[i]-s[i-1]);
        else  
        count=count+abs(s[i]-s[i-1]);
       // cout<<count<<endl;
    }
    cout<<count<<endl;
}