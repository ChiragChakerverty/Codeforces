#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char c;
    int n=s.size();
    for(int i=n-1;i>=0;i--)
    {   
        if(s[i]!='?' && s[i]!=32)
        {
            c=s[i];
            break;
        }
    }
    if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u' ||c=='y' || c=='Y' || c=='A' || c=='E' || c=='I'  || c=='O' || c=='U')
    cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
}