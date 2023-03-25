#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        if(n%2) n++;
        if(n<=6) cout<<"15"<<endl;
        else if(n==8) cout<<"20"<<endl;
        else if(n==10) cout<<"25"<<endl;
        else if(n>=12)
        {
            cout<<fixed<<((n*5)/2)<<endl;
        }
    }
    return 0;
}