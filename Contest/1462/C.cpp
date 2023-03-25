#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        if(x>45) cout<<-1<<endl;
        else 
        {
            string s="";
            int n=9;
            while(x>=n && x!=0 && n!=0)
            {
                x=x-n;
                s=s+char(n+'0');
                n--;
            } 
            if(x!=0) s=s+char(x+'0');
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
    }
}