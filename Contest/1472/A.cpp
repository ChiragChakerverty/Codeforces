#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int w,h,n;
        cin>>w>>h>>n;
        if(w>0 && h>0 && n==1) cout<<"YES"<<endl;
        else if(w%2==1 && h%2==1 && n>1) cout<<"NO"<<endl;
        else 
        {
            int loop_count=0;
            int prod=1;
            while(w%2==0 || h%2==0)
            {
                if(w%2==0)
                {
                    w=w/2;
                }
                else if(h%2==0)
                {
                    h=h/2;
                }
                loop_count++;
            }
            for(int i=0;i<loop_count;i++) prod=prod*2;
            if(prod>=n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}