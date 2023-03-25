#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--) 
    {
        long long int n; cin>>n;
        if(n<2020) cout<<"NO"<<endl;
        else if(((n%2020)==0)|| ((n%2021)==0)) cout<<"YES"<<endl;
        else 
        {
            for(int i=0;i<2019;i++)
            {
                n=n-2021;
                if(n<2020) 
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else if(n%2020==0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
        } 
    }
    return 0;
}