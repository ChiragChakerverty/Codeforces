#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,a4; cin>>a1>>a2>>a3>>a4;
    string s; cin>>s;
    int ans=0;
    int num1=0,num2=0,num3=0,num4=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') num1++;
        else if(s[i]=='2') num2++;
        else if(s[i]=='3') num3++;
        else if(s[i]=='4') num4++;
    }
    cout<<(num1*a1)+(num2*a2)+(num3*a3)+(num4*a4);
    return 0;
}