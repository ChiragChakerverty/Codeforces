#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else if(a<b) cout<<b-a<<endl;
        else
        {
            int n=a/b;
            int num=b*(n+1);
            cout<<num-a<<endl;
        }

    }
    return 0;
}