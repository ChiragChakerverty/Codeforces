#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n==1)
    {
        cout<<s<<endl;
        return 0;
    }
    vector<int> v((n+1)/2);
    v[0]=s[0]-'0';
    int i,j;
    for(i=1,j=2;i<v.size();i++,j=j+2)
    {
        v[i]=s[j]-'0';
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++) cout<<"+"<<v[i];
    return 0;
}